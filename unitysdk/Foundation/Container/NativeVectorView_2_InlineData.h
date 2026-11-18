#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_2_InlineData_TypeDefinitionIndex = 9087;

	template <typename T1, typename T2>
	struct alignas(8) NativeVectorView_2_InlineData
	{
		T1 Data; // 0x0
		::System::Int64 Length; // 0x0
	};
}
