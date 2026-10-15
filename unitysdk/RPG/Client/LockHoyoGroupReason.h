#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LockHoyoGroupReason_TypeDefinitionIndex = 62074;

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
