#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConfig_RoadGraphType_TypeDefinitionIndex = 87007;

	enum class PathGraphConfig_RoadGraphType : ::System::Int32
	{
		Highway = 1,
		Sidewalk = 0,
		Others = 3,
		Skyway = 2,
	};
}
