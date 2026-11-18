#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/RenderPriority.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D1A79D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D1A7950)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D1A79E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A79F0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_RenderPriorityParameter_TypeDefinitionIndex = 26369;

	class MKGlow_RenderPriorityParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::RenderPriority from, ::PostProcess::MKGlow::RenderPriority to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::RenderPriority, ::PostProcess::MKGlow::RenderPriority, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::RenderPriority get_value()
		{
			return ((::PostProcess::MKGlow::RenderPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::RenderPriority value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::RenderPriority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RENDERPRIORITYPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
