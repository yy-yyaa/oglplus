//  File implement/eglplus/enums/surface_type_bit_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/eglplus/surface_type_bit.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
EGLPLUS_LIB_FUNC CStrRef ValueName_(
	SurfaceTypeBit*,
	EGLenum value
) noexcept
#if (!EGLPLUS_LINK_LIBRARY || defined(EGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(EGLPLUS_IMPL_EVN_SURFACETYPEBIT)
#define EGLPLUS_IMPL_EVN_SURFACETYPEBIT
{
switch(value)
{
#if defined EGL_WINDOW_BIT
	case EGL_WINDOW_BIT: return CStrRef("WINDOW_BIT");
#endif
#if defined EGL_PIXMAP_BIT
	case EGL_PIXMAP_BIT: return CStrRef("PIXMAP_BIT");
#endif
#if defined EGL_PBUFFER_BIT
	case EGL_PBUFFER_BIT: return CStrRef("PBUFFER_BIT");
#endif
#if defined EGL_MULTISAMPLE_RESOLVE_BOX_BIT
	case EGL_MULTISAMPLE_RESOLVE_BOX_BIT: return CStrRef("MULTISAMPLE_RESOLVE_BOX_BIT");
#endif
#if defined EGL_SWAP_BEHAVIOR_PRESERVED_BIT
	case EGL_SWAP_BEHAVIOR_PRESERVED_BIT: return CStrRef("SWAP_BEHAVIOR_PRESERVED_BIT");
#endif
#if defined EGL_VG_COLORSPACE_LINEAR_BIT
	case EGL_VG_COLORSPACE_LINEAR_BIT: return CStrRef("VG_COLORSPACE_LINEAR_BIT");
#endif
#if defined EGL_VG_ALPHA_FORMAT_PRE_BIT
	case EGL_VG_ALPHA_FORMAT_PRE_BIT: return CStrRef("VG_ALPHA_FORMAT_PRE_BIT");
#endif
	default:;
}
EGLPLUS_FAKE_USE(value);
return CStrRef();
}
#else
;
#endif
} // namespace enums
