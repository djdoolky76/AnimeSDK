#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindState : ::System::Int32
	{
		Stable = 0,
		Forward = 1,
		Rewind = 2,
		Rebuild = 3,
	};
}
