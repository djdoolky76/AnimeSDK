#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	enum class PixAirTalentStatus : ::System::Int32
	{
		Locked = 0,
		Unlockable = 1,
		Unlocked = 2,
	};
}
