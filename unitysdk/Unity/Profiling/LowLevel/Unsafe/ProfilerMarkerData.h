#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Profiling::LowLevel::Unsafe
{
	struct alignas(8) ProfilerMarkerData
	{
		::System::Byte Type; // 0x10
		::System::Byte reserved0; // 0x11
		::System::UInt16 reserved1; // 0x12
		::System::UInt32 Size; // 0x14
		::PVOID Ptr; // 0x18
	};
}
