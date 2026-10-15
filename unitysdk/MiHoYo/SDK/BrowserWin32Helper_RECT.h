#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	struct alignas(4) BrowserWin32Helper_RECT
	{
		::System::Int32 Left; // 0x10
		::System::Int32 Top; // 0x14
		::System::Int32 Right; // 0x18
		::System::Int32 Bottom; // 0x1C
	};
}
