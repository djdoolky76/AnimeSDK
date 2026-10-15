#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	enum class RoadRashGameHitSource : ::System::Int32
	{
		None = 0,
		Projectile = 1,
		Slam = 2,
		Ultimate = 3,
	};
}
