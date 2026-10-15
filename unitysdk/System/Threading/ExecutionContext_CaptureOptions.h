#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class ExecutionContext_CaptureOptions : ::System::Int32
	{
		None = 0,
		IgnoreSyncCtx = 1,
		OptimizeDefaultCase = 2,
	};
}
