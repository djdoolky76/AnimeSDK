#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SummonUnitHideMask : ::System::UInt32
	{
		Custom = 1,
		FollowSummoner = 2,
		Performance = 4,
		LockSource = 8,
		GroundCheck = 16,
		MapRotation = 32,
		PerformanceChangePlayer = 64,
		SyncDitherWithTarget = 1024,
		AllHideMask = 1023,
		AllShowMask = 1047552,
	};
}
