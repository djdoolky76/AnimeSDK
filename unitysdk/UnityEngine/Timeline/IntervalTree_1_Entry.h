#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Timeline
{
	template <typename T>
	struct alignas(8) IntervalTree_1_Entry
	{
		::System::Int64 intervalStart; // 0x0
		::System::Int64 intervalEnd; // 0x0
		T item; // 0x0
	};
}
