#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2> class WriteDeferredDictionary_2; }

namespace Foundation
{
	inline static constexpr unsigned int WriteDeferredDictionary_2_LockHandle_TypeDefinitionIndex = 8692;

	template <typename T1, typename T2>
	struct alignas(8) WriteDeferredDictionary_2_LockHandle
	{
		::Foundation::WriteDeferredDictionary_2<T1, T2>* owner; // 0x0
	};
}
