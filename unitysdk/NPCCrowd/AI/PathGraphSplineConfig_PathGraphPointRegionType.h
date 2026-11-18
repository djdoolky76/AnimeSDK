#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineConfig_PathGraphPointRegionType_TypeDefinitionIndex = 84301;

	enum class PathGraphSplineConfig_PathGraphPointRegionType : ::System::Int32
	{
		StairTransition = 3,
		Stair = 1,
		FlatGround = 0,
		Slope = 2,
		BumpyGround = 4,
	};
}
