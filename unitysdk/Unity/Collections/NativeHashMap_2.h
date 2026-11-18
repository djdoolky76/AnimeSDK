#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/LowLevel/Unsafe/UnsafeHashMap_2.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeHashMap_2_TypeDefinitionIndex = 18017;

	template <typename T1, typename T2>
	struct alignas(8) NativeHashMap_2
	{
		::Unity::Collections::LowLevel::Unsafe::UnsafeHashMap_2<T1, T2> m_HashMapData; // 0x0
	};
}
