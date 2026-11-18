#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int ESceneObjectProxyType_TypeDefinitionIndex = 26342;

	enum class ESceneObjectProxyType : ::System::Int32
	{
		EmissionIntensityTrigger = 3,
		LightTrigger = 0,
		PlatformTrigger = 4,
		LightIntensityTrigger = 2,
		WeatherTrigger = 1,
	};
}
