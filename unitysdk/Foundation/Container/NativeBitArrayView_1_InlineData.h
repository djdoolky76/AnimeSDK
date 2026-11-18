#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArrayView_1_InlineData_TypeDefinitionIndex = 9024;

	template <typename T>
	struct alignas(8) NativeBitArrayView_1_InlineData
	{
		T Data; // 0x0
		::System::Int64 Length; // 0x0
	};
}
