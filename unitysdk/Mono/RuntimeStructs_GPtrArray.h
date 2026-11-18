#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Mono
{
	inline static constexpr unsigned int RuntimeStructs_GPtrArray_TypeDefinitionIndex = 19;

	struct alignas(8) RuntimeStructs_GPtrArray
	{
		::PVOID data; // 0x10
		::System::Int32 len; // 0x18
	};
}
