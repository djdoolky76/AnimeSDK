#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int ReadOnlyRawPtr_1_TypeDefinitionIndex = 27712;

	template <typename T>
	struct alignas(8) ReadOnlyRawPtr_1
	{
		::PVOID _ptr; // 0x0
	};
}
