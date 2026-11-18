#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int NativeList_1_TypeDefinitionIndex = 27706;

	template <typename T>
	struct alignas(8) NativeList_1
	{
		::Unity::Collections::Allocator _allocator; // 0x0
		::PVOID _storage; // 0x0
		::System::Int32 _capacity; // 0x0
		::System::Int32 _size; // 0x0
	};
}
