#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	struct alignas(4) Win32__SID_AND_ATTRIBUTES
	{
		::System::IntPtr Sid; // 0x10
		::System::Int32 Attributes; // 0x18
	};
}
