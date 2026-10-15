#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeArray_1_TypeDefinitionIndex = 3988;

	template <typename T>
	struct alignas(8) NativeArray_1
	{
		::PVOID m_Buffer; // 0x0
		::System::Int32 m_Length; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
