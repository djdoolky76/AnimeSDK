#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2822D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DepthOfFieldModeParameter_TypeDefinitionIndex = 26411;

	class DepthOfFieldModeParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Rendering::Universal::DepthOfFieldMode value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::DepthOfFieldMode, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DEPTHOFFIELDMODEPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
