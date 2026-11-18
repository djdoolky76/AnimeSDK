#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace IFix::Core
{
	inline static constexpr unsigned int UnmanagedStack_TypeDefinitionIndex = 6951;

	struct alignas(8) UnmanagedStack
	{
		::PVOID Base; // 0x10
		::PVOID Top; // 0x18
	};
}
