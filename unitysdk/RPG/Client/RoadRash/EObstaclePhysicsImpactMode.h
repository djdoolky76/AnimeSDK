#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RoadRash
{
	enum class EObstaclePhysicsImpactMode : ::System::Int32
	{
		None = 0,
		FixedDirection = 1,
		RelativeOpposite = 2,
	};
}
