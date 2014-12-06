/**
 *  @file oglplus/detail/any_iter.hpp
 *  @brief Type erasure for input iterators
 *
 *  @author Matus Chochlik
 *
 *  Copyright 2010-2014 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

#pragma once
#ifndef OGLPLUS_AUX_ANY_ITER_1302042006_HPP
#define OGLPLUS_AUX_ANY_ITER_1302042006_HPP

#include <cassert>
#include <string>
#include <memory>

namespace oglplus {
namespace aux {

template <typename T>
class AnyInputIter
{
private:
	struct _intf
	{
		virtual ~_intf(void)
		noexcept
		{ }

		virtual _intf* _clone(void) const = 0;

		virtual const T& _deref(void) const
		noexcept = 0;

		virtual void _incr(void)
		noexcept = 0;

		virtual bool _equal(const _intf* that) const
		noexcept = 0;

		virtual std::ptrdiff_t _dist(const _intf* that) const = 0;
	};

	template <typename Iter>
	class _impl : public _intf
	{
	private:
		Iter _iter;

		static const T& _conv(const T& val)
		noexcept
		{
			return val;
		}

		template <typename U>
		static typename std::enable_if<
			std::is_same<T, const char*>::value &&
			std::is_same<U, std::string>::value,
			const char*
		>::type _conv(const U& val)
		{
			return val.c_str();
		}
	public:
		_impl(Iter iter)
		 : _iter(iter)
		{ }

		_intf* _clone(void) const
		override
		{
			return new _impl(_iter);
		}

		const T& _deref(void) const
		noexcept
		override
		{
			return _conv(*_iter);
		}

		void _incr(void)
		noexcept
		override
		{
			++_iter;
		}

		bool _equal(const _intf* that) const
		noexcept
		override
		{
			assert(dynamic_cast<const _impl*>(that) != nullptr);
			const _impl* i = static_cast<const _impl*>(that);
			return _iter == i->_iter;
		}

		std::ptrdiff_t _dist(const _intf* that) const
		override
		{
			assert(dynamic_cast<const _impl*>(that) != nullptr);
			const _impl* i = static_cast<const _impl*>(that);
			return std::distance(_iter, i->_iter);
		}
	};

	std::unique_ptr<_intf> _pimpl;

	_intf* _clone(void) const
	{
		assert(_pimpl != nullptr);
		return _pimpl->_clone();
	}

	AnyInputIter(_intf* pimpl)
	noexcept
	 : _pimpl(pimpl)
	{
		assert(_pimpl != nullptr);
	}
public:
	typedef T value_type;
	typedef T* pointer;
	typedef T& reference;
	typedef const T& const_reference;
	typedef std::ptrdiff_t difference_type;
	typedef std::input_iterator_tag iterator_category;

	template <typename Iter>
	AnyInputIter(Iter i)
	 : _pimpl(new _impl<Iter>(i))
	{ }

	AnyInputIter(const AnyInputIter& that)
	 : _pimpl(that._clone())
	{ }

	AnyInputIter(AnyInputIter&& tmp)
	noexcept
	 : _pimpl(std::move(tmp._pimpl))
	{
	}

	AnyInputIter& operator = (const AnyInputIter& that)
	{
		_pimpl.reset(that._clone());
		return *this;
	}

	AnyInputIter& operator = (AnyInputIter&& tmp)
	noexcept
	{
		_pimpl = std::move(tmp._pimpl);
		return *this;
	}

	const T& operator * (void) const
	noexcept
	{
		assert(_pimpl != nullptr);
		return _pimpl->_deref();
	}

	const T* operator -> (void) const
	noexcept
	{
		assert(_pimpl != nullptr);
		return &_pimpl->_deref();
	}

	AnyInputIter& operator ++ (void)
	noexcept
	{
		assert(_pimpl != nullptr);
		_pimpl->_incr();
		return *this;
	}

	AnyInputIter operator ++ (int)
	noexcept
	{
		AnyInputIter copy(_clone());
		assert(_pimpl != nullptr);
		_pimpl->incr();
		return std::move(copy);
	}

	friend
	bool operator == (const AnyInputIter& a, const AnyInputIter& b)
	noexcept
	{
		assert(a._pimpl != nullptr);
		assert(b._pimpl != nullptr);
		return a._pimpl->_equal(b._pimpl.get());
	}

	friend
	bool operator != (const AnyInputIter& a, const AnyInputIter& b)
	noexcept
	{
		assert(a._pimpl != nullptr);
		assert(b._pimpl != nullptr);
		return !a._pimpl->_equal(b._pimpl.get());
	}

	friend
	std::ptrdiff_t operator - (
		const AnyInputIter& a,
		const AnyInputIter& b
	)
	{
		assert(a._pimpl != nullptr);
		assert(b._pimpl != nullptr);
		return b._pimpl->_dist(a._pimpl.get());
	}
};

template <typename T>
inline
std::ptrdiff_t distance(const AnyInputIter<T>& from, const AnyInputIter<T>& to)
{
	return to - from;
}

} // aux
} // oglplus

#endif // include guard