#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class EventResetMode : ::System::Int32
	{
		AutoReset = 0,
		ManualReset = 1,
	};
}
