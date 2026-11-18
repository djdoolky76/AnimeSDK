#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/GlareStyle.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4574A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D457420)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4574B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4574C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_GlareStyleParameter_TypeDefinitionIndex = 26378;

	class MKGlow_GlareStyleParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::GlareStyle from, ::PostProcess::MKGlow::GlareStyle to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::GlareStyle, ::PostProcess::MKGlow::GlareStyle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::GlareStyle get_value()
		{
			return ((::PostProcess::MKGlow::GlareStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::GlareStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::GlareStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
