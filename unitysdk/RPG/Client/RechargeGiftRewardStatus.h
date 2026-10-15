#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class RechargeGiftRewardStatus : ::System::Int32
	{
		None = 0,
		Locked = 1,
		CanReceive = 2,
		Received = 3,
	};
}
