#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	struct alignas(4) BrowserWin32Helper_POINT
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
	};
}
