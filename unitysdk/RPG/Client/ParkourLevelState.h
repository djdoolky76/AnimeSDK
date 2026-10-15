#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ParkourLevelState : ::System::Int32
	{
		None = 0,
		Locked = 1,
		Unlocked = 2,
		Finished = 3,
	};
}
