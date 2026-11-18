#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeList_1_TypeDefinitionIndex = 18020;

	template <typename T>
	struct alignas(8) NativeList_1
	{
		::PVOID m_ListData; // 0x0
		::Unity::Collections::Allocator m_DeprecatedAllocator; // 0x0
	};
}
