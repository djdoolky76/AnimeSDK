#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ActivityLoginData_RewardStatus : ::System::Int32
	{
		None = 0,
		Unavailable = 1,
		Available = 2,
		Received = 3,
	};
}
