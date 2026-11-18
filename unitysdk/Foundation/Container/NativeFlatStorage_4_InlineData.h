#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorage_4_InlineData_TypeDefinitionIndex = 9040;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) NativeFlatStorage_4_InlineData
	{
		T1 Data; // 0x0
		::System::Int64 Capacity; // 0x0
	};
}
