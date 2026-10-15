#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PlayerPreparationState : ::System::Int32
	{
		None = 0,
		BattleLock = 1,
		PendingLock = 2,
	};
}
