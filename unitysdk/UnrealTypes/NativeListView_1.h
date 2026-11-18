#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int NativeListView_1_TypeDefinitionIndex = 27707;

	template <typename T>
	struct alignas(8) NativeListView_1
	{
		::PVOID _storage; // 0x0
		::System::Int32 _count; // 0x0
	};
}
