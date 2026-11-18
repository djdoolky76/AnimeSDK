#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeArrayView_2_TypeDefinitionIndex = 8724;

	template <typename T1, typename T2>
	struct alignas(8) NativeArrayView_2
	{
		::Foundation::Container::NativeFlatStorageView_2<T1, T2> _view; // 0x0
	};
}
