#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	enum class TimerThread_TimerNode_TimerState : ::System::Int32
	{
		Ready = 0,
		Fired = 1,
		Cancelled = 2,
		Sentinel = 3,
	};
}
