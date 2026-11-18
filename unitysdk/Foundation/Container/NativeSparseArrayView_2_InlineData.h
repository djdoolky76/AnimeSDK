#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_InlineData_TypeDefinitionIndex = 9058;

	template <typename T1, typename T2>
	struct alignas(8) NativeSparseArrayView_2_InlineData
	{
		T1 Data; // 0x0
		::System::Int64 FirstFreeIndex; // 0x0
		::System::Int64 FreeIndexNum; // 0x0
	};
}
