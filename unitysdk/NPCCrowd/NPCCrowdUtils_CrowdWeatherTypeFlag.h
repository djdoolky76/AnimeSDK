#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdUtils_CrowdWeatherTypeFlag_TypeDefinitionIndex = 63473;

	enum class NPCCrowdUtils_CrowdWeatherTypeFlag : ::System::Int32
	{
		Cloudy = 8,
		SunShine = 2,
		Thunder = 32,
		None = 1,
		ThickFog = 64,
		Fog = 4,
		ThickCloudy = 128,
		Any = 0,
		Rain = 16,
	};
}
