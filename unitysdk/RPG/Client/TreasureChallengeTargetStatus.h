#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TreasureChallengeTargetStatus : ::System::Int32
	{
		None = 0,
		Finished = 1,
		Doing = 2,
		Fail = 3,
	};
}
