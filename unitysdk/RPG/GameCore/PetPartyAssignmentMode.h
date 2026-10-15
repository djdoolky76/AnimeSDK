#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PetPartyAssignmentMode : ::System::Int32
	{
		Waiting = 0,
		Tracking = 1,
		Holding = 2,
		Teleport = 3,
		DelayedTracking = 4,
	};
}
