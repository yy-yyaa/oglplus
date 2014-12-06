//  File implement/oglplus/enums/framebuffer_color_attachment_names.ipp
//
//  Automatically generated file, DO NOT modify manually.
//  Edit the source 'source/enums/oglplus/framebuffer_color_attachment.txt'
//  or the 'source/enums/make_enum.py' script instead.
//
//  Copyright 2010-2014 Matus Chochlik.
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
namespace enums {
OGLPLUS_LIB_FUNC CStrRef ValueName_(
	FramebufferColorAttachment*,
	GLenum value
) noexcept
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVN_FRAMEBUFFERCOLORATTACHMENT)
#define OGLPLUS_IMPL_EVN_FRAMEBUFFERCOLORATTACHMENT
{
switch(value)
{
#if defined GL_COLOR_ATTACHMENT0
	case GL_COLOR_ATTACHMENT0: return CStrRef("COLOR_ATTACHMENT0");
#endif
#if defined GL_COLOR_ATTACHMENT1
	case GL_COLOR_ATTACHMENT1: return CStrRef("COLOR_ATTACHMENT1");
#endif
#if defined GL_COLOR_ATTACHMENT2
	case GL_COLOR_ATTACHMENT2: return CStrRef("COLOR_ATTACHMENT2");
#endif
#if defined GL_COLOR_ATTACHMENT3
	case GL_COLOR_ATTACHMENT3: return CStrRef("COLOR_ATTACHMENT3");
#endif
#if defined GL_COLOR_ATTACHMENT4
	case GL_COLOR_ATTACHMENT4: return CStrRef("COLOR_ATTACHMENT4");
#endif
#if defined GL_COLOR_ATTACHMENT5
	case GL_COLOR_ATTACHMENT5: return CStrRef("COLOR_ATTACHMENT5");
#endif
#if defined GL_COLOR_ATTACHMENT6
	case GL_COLOR_ATTACHMENT6: return CStrRef("COLOR_ATTACHMENT6");
#endif
#if defined GL_COLOR_ATTACHMENT7
	case GL_COLOR_ATTACHMENT7: return CStrRef("COLOR_ATTACHMENT7");
#endif
#if defined GL_COLOR_ATTACHMENT8
	case GL_COLOR_ATTACHMENT8: return CStrRef("COLOR_ATTACHMENT8");
#endif
#if defined GL_COLOR_ATTACHMENT9
	case GL_COLOR_ATTACHMENT9: return CStrRef("COLOR_ATTACHMENT9");
#endif
#if defined GL_COLOR_ATTACHMENT10
	case GL_COLOR_ATTACHMENT10: return CStrRef("COLOR_ATTACHMENT10");
#endif
#if defined GL_COLOR_ATTACHMENT11
	case GL_COLOR_ATTACHMENT11: return CStrRef("COLOR_ATTACHMENT11");
#endif
#if defined GL_COLOR_ATTACHMENT12
	case GL_COLOR_ATTACHMENT12: return CStrRef("COLOR_ATTACHMENT12");
#endif
#if defined GL_COLOR_ATTACHMENT13
	case GL_COLOR_ATTACHMENT13: return CStrRef("COLOR_ATTACHMENT13");
#endif
#if defined GL_COLOR_ATTACHMENT14
	case GL_COLOR_ATTACHMENT14: return CStrRef("COLOR_ATTACHMENT14");
#endif
#if defined GL_COLOR_ATTACHMENT15
	case GL_COLOR_ATTACHMENT15: return CStrRef("COLOR_ATTACHMENT15");
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
