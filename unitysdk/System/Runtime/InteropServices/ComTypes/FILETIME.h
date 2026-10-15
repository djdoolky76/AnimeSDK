#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Runtime::InteropServices::ComTypes
{
	struct alignas(4) FILETIME
	{
		::System::Int32 dwLowDateTime; // 0x10
		::System::Int32 dwHighDateTime; // 0x14
	};
}
