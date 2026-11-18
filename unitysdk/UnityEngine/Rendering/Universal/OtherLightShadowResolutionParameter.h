#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_OTHERLIGHTSHADOWRESOLUTIONPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382CF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int OtherLightShadowResolutionParameter_TypeDefinitionIndex = 26330;

	class OtherLightShadowResolutionParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_OTHERLIGHTSHADOWRESOLUTIONPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
