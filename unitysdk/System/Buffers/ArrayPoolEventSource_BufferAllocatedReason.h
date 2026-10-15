#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers
{
	enum class ArrayPoolEventSource_BufferAllocatedReason : ::System::Int32
	{
		Pooled = 0,
		OverMaximumSize = 1,
		PoolExhausted = 2,
	};
}
