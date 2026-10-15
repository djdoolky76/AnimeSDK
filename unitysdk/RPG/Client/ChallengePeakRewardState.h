#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ChallengePeakRewardState : ::System::Int32
	{
		None = 0,
		InProgress = 1,
		CanTake = 2,
		Taken = 3,
	};
}
