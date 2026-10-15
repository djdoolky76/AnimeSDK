#pragma once
#include "unitysdk/unitysdk.h"

namespace IFix::Core
{
	struct alignas(8) UnmanagedStack
	{
		::PVOID Base; // 0x10
		::PVOID Top; // 0x18
	};
}
