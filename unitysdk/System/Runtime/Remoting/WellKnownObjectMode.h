#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::Remoting
{
	enum class WellKnownObjectMode : ::System::Int32
	{
		Singleton = 1,
		SingleCall = 2,
	};
}
