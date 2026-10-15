#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	enum class ExecutionContext_Flags : ::System::Int32
	{
		None = 0,
		IsNewCapture = 1,
		IsFlowSuppressed = 2,
		IsPreAllocatedDefault = 4,
	};
}
