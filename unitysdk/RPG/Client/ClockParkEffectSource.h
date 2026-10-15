#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ClockParkEffectSource : ::System::Int32
	{
		None = 0,
		Action = 1,
		Buff = 2,
	};
}
