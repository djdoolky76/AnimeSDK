#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics::Tracing
{
	enum class EventChannel : ::System::Byte
	{
		None = 0,
		Admin = 16,
		Operational = 17,
		Analytic = 18,
		Debug = 19,
	};
}
