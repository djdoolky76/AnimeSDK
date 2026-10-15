#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks
{
	enum class AsyncCausalityStatus : ::System::Int32
	{
		Started = 0,
		Completed = 1,
		Canceled = 2,
		Error = 3,
	};
}
