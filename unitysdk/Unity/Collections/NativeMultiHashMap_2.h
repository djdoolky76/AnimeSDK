#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeMultiHashMap_2.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeMultiHashMap_2_TypeDefinitionIndex = 18019;

	template <typename T1, typename T2>
	struct alignas(8) NativeMultiHashMap_2
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeMultiHashMap_2<T1, T2> m_MultiHashMapData; // 0x0
	};
}
