#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation { template <typename T> class IObjectPoolAllocator_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectPoolInstanceWithAllocator_1_TypeDefinitionIndex = 8271;

	template <typename T>
	class ObjectPoolInstanceWithAllocator_1
	{
	public:
		::Foundation::IObjectPoolAllocator_1<T>* _allocator; // 0x0
	};
}
