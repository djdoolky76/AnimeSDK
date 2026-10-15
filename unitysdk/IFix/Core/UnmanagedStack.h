#pragma once
#include "unitysdk/unitysdk.h"

namespace IFix::Core
{
	inline static constexpr unsigned int UnmanagedStack_TypeDefinitionIndex = 7131;

	struct alignas(8) UnmanagedStack
	{
		::PVOID Base; // 0x10
		::PVOID Top; // 0x18
	};
}
