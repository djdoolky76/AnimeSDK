#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CollisionDataFlag : ::System::Int32
	{
		Dirty = 1,
		Removed = 2,
		Trigger = 4,
		Avoidance = 8,
	};
}
