#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow { class MKGlowResources; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8D26A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D8D26B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D26C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_ResourcesParameter_TypeDefinitionIndex = 26375;

	class MKGlow_ResourcesParameter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER__CTOR_OFFSET))(this);
		}

		::PostProcess::MKGlow::MKGlowResources* get_value()
		{
			return ((::PostProcess::MKGlow::MKGlowResources*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::MKGlowResources* value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MKGlowResources*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
