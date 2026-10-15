#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	struct alignas(4) DeviceInfoManager_MEMORY_INFO
	{
		::System::UInt32 dwLength; // 0x10
		::System::UInt32 dwMemoryLoad; // 0x14
		::System::UInt64 dwTotalPhys; // 0x18
		::System::UInt64 dwAvailPhys; // 0x20
		::System::UInt64 dwTotalPageFile; // 0x28
		::System::UInt64 dwAvailPageFile; // 0x30
		::System::UInt64 dwTotalVirtual; // 0x38
		::System::UInt64 dwAvailVirtual; // 0x40
	};
}
