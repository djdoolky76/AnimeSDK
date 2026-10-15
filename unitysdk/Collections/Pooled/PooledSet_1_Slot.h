#pragma once
#include "unitysdk/unitysdk.h"

namespace Collections::Pooled
{
	template <typename T>
	struct alignas(8) PooledSet_1_Slot
	{
		::System::Int32 hashCode; // 0x0
		::System::Int32 next; // 0x0
		T value; // 0x0
	};
}
