#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit : ::System::Int32
	{
		DependOnRemainTime = 0,
		Day = 1,
		Hour = 2,
		Minute = 3,
		Second = 4,
	};
}
