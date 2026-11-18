#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisualEnvironmentE_OverrideWeatherPriority_TypeDefinitionIndex = 26355;

	enum class VisualEnvironmentE_OverrideWeatherPriority : ::System::Int32
	{
		GamePlay = 100,
		Timeline = 1000,
		Scene = 0,
	};
}
