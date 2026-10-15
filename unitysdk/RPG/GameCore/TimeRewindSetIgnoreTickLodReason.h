#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TimeRewindSetIgnoreTickLodReason : ::System::Int32
	{
		NotStableState = 0,
		Performance = 1,
	};
}
