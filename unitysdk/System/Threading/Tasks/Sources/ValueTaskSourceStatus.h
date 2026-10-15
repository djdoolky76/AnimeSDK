#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading::Tasks::Sources
{
	enum class ValueTaskSourceStatus : ::System::Int32
	{
		Pending = 0,
		Succeeded = 1,
		Faulted = 2,
		Canceled = 3,
	};
}
