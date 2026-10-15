#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	struct alignas(4) NativeVersionInfo
	{
		::System::UInt32 major; // 0x10
		::System::UInt32 minor; // 0x14
		::System::UInt32 patch; // 0x18
		::System::UInt32 build; // 0x1C
	};
}
