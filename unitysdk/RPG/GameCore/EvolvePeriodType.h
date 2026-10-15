#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EvolvePeriodType : ::System::Int32
	{
		Unknown = 0,
		PeriodFirst = 1,
		PeriodSecond = 2,
		PeriodThird = 3,
		PeriodExtra = 4,
	};
}
