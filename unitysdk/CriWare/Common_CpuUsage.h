#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) Common_CpuUsage
	{
		::System::Single last; // 0x10
		::System::Single average; // 0x14
		::System::Single peak; // 0x18
	};
}
