#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdvNPCRunAwayPlayerStatus : ::System::Int32
	{
		Empty = 0,
		SelectRunAwayTargetPoint = 1,
		RunAway = 2,
		LastRunAwaySelect = 3,
		RunAwayEnd = 4,
	};
}
