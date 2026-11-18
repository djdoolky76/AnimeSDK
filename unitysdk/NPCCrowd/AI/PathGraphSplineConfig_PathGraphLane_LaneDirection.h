#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphLane_LaneDirection_TypeDefinitionIndex = 84300;

	enum class PathGraphSplineConfig_PathGraphLane_LaneDirection : ::System::Int32
	{
		Bidirectional = 3,
		Forward = 1,
		Backward = 2,
	};
}
