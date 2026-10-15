#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	enum class ActivityHipplenMiniGameManager_InnerState : ::System::Int32
	{
		None = 0,
		InitPerformance = 1,
		WaitingStart = 2,
		Gaming = 3,
		Finished = 4,
	};
}
