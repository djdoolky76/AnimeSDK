#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_ExitStyle_TypeDefinitionIndex = 48122;

	enum class PathGraphExitPointConfig_ExitStyle : ::System::Int32
	{
		ExitAtSplineNearestPoint = 2,
		ExitAtSplineStartPoint = 0,
		MoveFromSplineEndPoint = 4,
		MoveBlendWithSplinePoints = 6,
		MoveFromSplineStartPoint = 3,
		ExitAtSplineEndPoint = 1,
		MoveFromSplineNearestPoint = 5,
	};
}
