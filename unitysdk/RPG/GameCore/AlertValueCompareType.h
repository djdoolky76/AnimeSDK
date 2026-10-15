#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AlertValueCompareType : ::System::Int32
	{
		AlertValueInRange = 0,
		AlertValueLargerThanGuardMin = 1,
		AlertValueLargerThanGuardMax = 2,
	};
}
