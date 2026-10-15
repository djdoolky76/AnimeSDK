#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::RoadRash
{
	enum class ERoadRashImpactShakeType : ::System::Int32
	{
		HitWall = 0,
		HitCarNormal = 1,
		HitCarSlam = 2,
		HitCarUltimate = 3,
		CarLanded = 4,
	};
}
