#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TriggerExitReason : ::System::Int32
	{
		ExitRegion = 0,
		HostDisable = 1,
		GuestDisable = 2,
	};
}
