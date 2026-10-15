#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class WorldShiftingReason : ::System::Int32
	{
		MapRotationReset = 0,
		MapRotation = 1,
	};
}
