#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LockHoyoGroupReason : ::System::UInt32
	{
		EraFlipper = 0,
		Puzzle = 1,
		Performance = 2,
		Dialogue = 3,
		PerformanceLevelGraph = 4,
		FiveDim = 5,
		MAX = 6,
	};
}
