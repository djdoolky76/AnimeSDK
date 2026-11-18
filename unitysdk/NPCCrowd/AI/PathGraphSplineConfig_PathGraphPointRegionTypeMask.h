#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionTypeMask_TypeDefinitionIndex = 84302;

	enum class PathGraphSplineConfig_PathGraphPointRegionTypeMask : ::System::Int32
	{
		StairTransition = 8,
		DownwardSlope = 32,
		FlatGround = 1,
		TurnRight = 128,
		TurnLeft = 64,
		Stair = 2,
		UpwardSlope = 16,
		Slope = 4,
		None = 0,
	};
}
