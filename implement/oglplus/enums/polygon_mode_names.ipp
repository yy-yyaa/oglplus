//  File implement/oglplus/enums/polygon_mode_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/polygon_mode.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC CStrRef ValueName_(
	PolygonMode*,
	GLenum value
) noexcept
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_POLYGONMODE)
#define OGLPLUS_IMPL_EVN_POLYGONMODE
{
switch(value)
{
#if defined GL_POINT
	case GL_POINT: return CStrRef("POINT");
#endif
#if defined GL_LINE
	case GL_LINE: return CStrRef("LINE");
#endif
#if defined GL_FILL
	case GL_FILL: return CStrRef("FILL");
#endif
	default:;
}
OGLPLUS_FAKE_USE(value);
return CStrRef();
}
#else
;
#endif
} // namespace enums
