#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PauseRegionManagerReason : ::System::Int32
	{
		Default = 0,
		Puzzle = 1,
		LeaveDefaultArea = 2,
		FiveDim = 3,
	};
}
