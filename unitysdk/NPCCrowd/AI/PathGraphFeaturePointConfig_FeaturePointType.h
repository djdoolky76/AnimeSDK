#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointConfig_FeaturePointType_TypeDefinitionIndex = 91302;

	enum class PathGraphFeaturePointConfig_FeaturePointType : ::System::Int32
	{
		SpawnPoint = 1,
		BatchSpawnPoint = 5,
		SplineSpawnPoint = 6,
		CrossingPoint = 3,
		GuidePoint = 4,
		ExitPoint = 2,
		None = 0,
	};
}
