#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationLimitMode_TypeDefinitionIndex = 85277;

	enum class PopulationLimitMode : ::System::Int32
	{
		PopulationCount = 0,
		PopulationWeight = 1,
	};
}
