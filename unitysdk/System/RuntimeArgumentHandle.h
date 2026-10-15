#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	struct alignas(4) RuntimeArgumentHandle
	{
		::System::IntPtr args; // 0x10
	};
}
