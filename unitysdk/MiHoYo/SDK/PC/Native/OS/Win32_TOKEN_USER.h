#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/Native/OS/Win32__SID_AND_ATTRIBUTES.h"

namespace MiHoYo::SDK::PC::Native::OS
{
	struct alignas(4) Win32_TOKEN_USER
	{
		::MiHoYo::SDK::PC::Native::OS::Win32__SID_AND_ATTRIBUTES User; // 0x10
	};
}
