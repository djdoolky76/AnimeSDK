#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int RawPtr_1_TypeDefinitionIndex = 27711;

	template <typename T>
	struct alignas(8) RawPtr_1
	{
		::PVOID _ptr; // 0x0
	};
}
