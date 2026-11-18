#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorageView_2_InlineData_TypeDefinitionIndex = 8978;

	template <typename T1, typename T2>
	struct alignas(8) NativeFlatStorageView_2_InlineData
	{
		T1 Data; // 0x0
		::System::Int64 Capacity; // 0x0
	};
}
