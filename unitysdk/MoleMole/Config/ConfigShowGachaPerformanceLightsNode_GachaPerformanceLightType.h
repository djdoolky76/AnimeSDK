#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType_TypeDefinitionIndex = 76607;

	enum class ConfigShowGachaPerformanceLightsNode_GachaPerformanceLightType : ::System::Int32
	{
		SceneLights = 1,
		ShowLights = 0,
		CharacterLights = 2,
		TvSceneLights = 3,
	};
}
