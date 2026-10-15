#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Diagnostics
{
	enum class TraceLevel : ::System::Int32
	{
		Off = 0,
		Error = 1,
		Warning = 2,
		Info = 3,
		Verbose = 4,
	};
}
