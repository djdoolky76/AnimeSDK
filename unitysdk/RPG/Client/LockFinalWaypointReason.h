#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LockFinalWaypointReason : ::System::Int32
	{
		None = 0,
		SwitchHand = 1,
	};
}
