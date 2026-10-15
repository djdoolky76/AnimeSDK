#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class SynchronizationContextProperties : ::System::Int32
	{
		None = 0,
		RequireWaitNotification = 1,
	};
}
