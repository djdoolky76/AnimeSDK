#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class OfferingRewardUnlockState : ::System::Int32
	{
		Normal = 0,
		MaxLevel = 1,
		Locked = 2,
	};
}
