#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ScopedWriterLock_1_TypeDefinitionIndex = 8795;

	template <typename T>
	struct alignas(8) ScopedWriterLock_1
	{
		T _lock; // 0x0
	};
}
