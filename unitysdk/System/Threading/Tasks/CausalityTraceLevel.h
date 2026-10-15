#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	enum class CausalityTraceLevel : ::System::Int32
	{
		Required = 0,
		Important = 1,
		Verbose = 2,
	};
}
