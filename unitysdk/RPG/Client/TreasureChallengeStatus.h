#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TreasureChallengeStatus : ::System::Int32
	{
		Default = 0,
		Success = 1,
		Finish = 2,
		ReEnter = 3,
	};
}
