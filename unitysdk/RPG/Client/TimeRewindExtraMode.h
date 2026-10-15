#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class TimeRewindExtraMode : ::System::Int32
	{
		Normal = 0,
		LoopRewind = 1,
		DualDirection = 2,
	};
}
