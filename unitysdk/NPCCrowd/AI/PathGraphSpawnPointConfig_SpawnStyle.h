#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_SpawnStyle_TypeDefinitionIndex = 71370;

	enum class PathGraphSpawnPointConfig_SpawnStyle : ::System::Int32
	{
		MoveBlendWithSplinePoints = 6,
		TeleportToSplineEndPoint = 1,
		MoveToSplineStartPoint = 3,
		MoveToSplineEndPoint = 4,
		TeleportToSplineStartPoint = 0,
		MoveToSplineNearestPoint = 5,
		TeleportToSplineNearestPoint = 2,
	};
}
