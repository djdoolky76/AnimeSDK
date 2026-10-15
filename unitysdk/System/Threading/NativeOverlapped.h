#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Threading
{
	struct alignas(4) NativeOverlapped
	{
		::System::IntPtr InternalLow; // 0x10
		::System::IntPtr InternalHigh; // 0x18
		::System::Int32 OffsetLow; // 0x20
		::System::Int32 OffsetHigh; // 0x24
		::System::IntPtr EventHandle; // 0x28
	};
}
