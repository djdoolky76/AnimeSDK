#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeArrayData_3_TypeDefinitionIndex = 8993;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeArrayData_3
	{
		::Foundation::Container::NativeFlatStorage_3<T1, T2, T3> _storage; // 0x0
	};
}
