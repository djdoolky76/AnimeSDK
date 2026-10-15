#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PauseAbilityReason : ::System::Int32
	{
		Freeze = 2,
		TimeLock = 4,
	};
}
