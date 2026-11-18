#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_ExitStyle_TypeDefinitionIndex = 58663;

	enum class PathGraphExitPointComponent_ExitStyle : ::System::Int32
	{
		MoveFromSplineEndPoint = 4,
		MoveFromSplineStartPoint = 3,
		MoveBlendWithSplinePoints = 6,
		ExitAtSplineStartPoint = 0,
		ExitAtSplineEndPoint = 1,
		MoveFromSplineNearestPoint = 5,
		ExitAtSplineNearestPoint = 2,
	};
}
