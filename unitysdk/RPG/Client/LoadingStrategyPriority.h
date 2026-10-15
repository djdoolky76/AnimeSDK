#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LoadingStrategyPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
		VeryHigh = 3,
		Highest = 4,
		Exclusive = 5,
	};
}
