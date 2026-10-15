#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CollierTriggerComponentEnableReason : ::System::Int32
	{
		Conflict = 0,
		ControlByOthers = 1,
		MapRotation = 2,
		GroupVisibility = 3,
		EraFlipDeviceControl = 4,
		FiveDim = 5,
		Puzzle = 6,
	};
}
