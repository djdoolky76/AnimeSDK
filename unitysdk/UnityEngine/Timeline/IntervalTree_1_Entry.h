#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int IntervalTree_1_Entry_TypeDefinitionIndex = 32450;

	template <typename T>
	struct alignas(8) IntervalTree_1_Entry
	{
		::System::Int64 intervalStart; // 0x0
		::System::Int64 intervalEnd; // 0x0
		T item; // 0x0
	};
}
