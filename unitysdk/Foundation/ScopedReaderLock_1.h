#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ScopedReaderLock_1_TypeDefinitionIndex = 8874;

	template <typename T>
	struct alignas(8) ScopedReaderLock_1
	{
		T _lock; // 0x0
	};
}
