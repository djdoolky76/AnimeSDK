#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Buffers
{
	inline static constexpr unsigned int ArrayPoolEventSource_EC2E07CC351D71B1_BufferAllocatedReason_TypeDefinitionIndex = 6533;

	enum class ArrayPoolEventSource_EC2E07CC351D71B1_BufferAllocatedReason : ::System::Int32
	{
		Pooled = 0,
		OverMaximumSize = 1,
		PoolExhausted = 2,
	};
}
