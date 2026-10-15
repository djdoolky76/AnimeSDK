#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FiveDimGarbageBinOnRollToAnother : ::System::Int32
	{
		KillAnother = 0,
		RollAnotherAndKillSelf = 1,
	};
}
