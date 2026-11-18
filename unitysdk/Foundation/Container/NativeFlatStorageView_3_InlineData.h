#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorageView_3_InlineData_TypeDefinitionIndex = 9099;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeFlatStorageView_3_InlineData
	{
		T1 Data; // 0x0
		::System::Int64 Capacity; // 0x0
	};
}
