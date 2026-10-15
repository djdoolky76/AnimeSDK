#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class HitTimeSlowType : ::System::Int32
	{
		None = 0,
		Puncture = 1,
		Slash = 2,
		Impact = 3,
	};
}
