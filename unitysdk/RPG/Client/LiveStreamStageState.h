#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LiveStreamStageState : ::System::Byte
	{
		None = 0,
		Locked = 1,
		AboutToUnlock = 2,
		Unlocked = 3,
		Review = 4,
	};
}
