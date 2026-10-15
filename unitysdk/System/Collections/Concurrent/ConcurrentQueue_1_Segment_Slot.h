#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Concurrent
{
	template <typename T>
	struct alignas(8) ConcurrentQueue_1_Segment_Slot
	{
		T Item; // 0x0
		::System::Int32 SequenceNumber; // 0x0
	};
}
