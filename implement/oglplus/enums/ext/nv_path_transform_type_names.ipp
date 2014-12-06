//  File implement/oglplus/enums/ext/nv_path_transform_type_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/ext/nv_path_transform_type.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC CStrRef ValueName_(
	PathNVTransformType*,
	GLenum value
) noexcept
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_PATHNVTRANSFORMTYPE)
#define OGLPLUS_IMPL_EVN_PATHNVTRANSFORMTYPE
{
switch(value)
{
#if defined GL_NONE
	case GL_NONE: return CStrRef("NONE");
#endif
#if defined GL_TRANSLATE_X_NV
	case GL_TRANSLATE_X_NV: return CStrRef("TRANSLATE_X_NV");
#endif
#if defined GL_TRANSLATE_Y_NV
	case GL_TRANSLATE_Y_NV: return CStrRef("TRANSLATE_Y_NV");
#endif
#if defined GL_TRANSLATE_2D_NV
	case GL_TRANSLATE_2D_NV: return CStrRef("TRANSLATE_2D_NV");
#endif
#if defined GL_TRANSLATE_3D_NV
	case GL_TRANSLATE_3D_NV: return CStrRef("TRANSLATE_3D_NV");
#endif
#if defined GL_AFFINE_2D_NV
	case GL_AFFINE_2D_NV: return CStrRef("AFFINE_2D_NV");
#endif
#if defined GL_AFFINE_3D_NV
	case GL_AFFINE_3D_NV: return CStrRef("AFFINE_3D_NV");
#endif
#if defined GL_TRANSPOSE_AFFINE_2D_NV
	case GL_TRANSPOSE_AFFINE_2D_NV: return CStrRef("TRANSPOSE_AFFINE_2D_NV");
#endif
#if defined GL_TRANSPOSE_AFFINE_3D_NV
	case GL_TRANSPOSE_AFFINE_3D_NV: return CStrRef("TRANSPOSE_AFFINE_3D_NV");
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
