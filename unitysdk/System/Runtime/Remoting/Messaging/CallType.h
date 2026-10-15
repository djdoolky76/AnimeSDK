#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting::Messaging
{
	enum class CallType : ::System::Int32
	{
		Sync = 0,
		BeginInvoke = 1,
		EndInvoke = 2,
		OneWay = 3,
	};
}
