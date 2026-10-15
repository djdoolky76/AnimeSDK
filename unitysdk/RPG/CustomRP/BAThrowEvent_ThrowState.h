#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class BAThrowEvent_ThrowState : ::System::Int32
	{
		eStop = 0,
		eStart = 1,
		eAttached = 2,
		eA2B = 3,
		eB2A = 4,
	};
}
