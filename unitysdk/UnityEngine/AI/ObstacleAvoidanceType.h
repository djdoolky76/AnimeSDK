#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::AI
{
	enum class ObstacleAvoidanceType : ::System::Int32
	{
		NoObstacleAvoidance = 0,
		LowQualityObstacleAvoidance = 1,
		MedQualityObstacleAvoidance = 2,
		GoodQualityObstacleAvoidance = 3,
		HighQualityObstacleAvoidance = 4,
	};
}
