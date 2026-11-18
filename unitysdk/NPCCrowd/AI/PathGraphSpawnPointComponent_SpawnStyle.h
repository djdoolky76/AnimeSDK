#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_SpawnStyle_TypeDefinitionIndex = 45811;

	enum class PathGraphSpawnPointComponent_SpawnStyle : ::System::Int32
	{
		MoveToSplineNearestPoint = 5,
		MoveToSplineEndPoint = 4,
		MoveToSplineStartPoint = 3,
		TeleportToSplineStartPoint = 0,
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineNearestPoint = 2,
		TeleportToSplineEndPoint = 1,
	};
}
