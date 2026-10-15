#pragma once
#include "unitysdk/unitysdk.h"

namespace CriWare
{
	struct alignas(4) CriAtomEx_ResourceUsage
	{
		::System::UInt32 useCount; // 0x10
		::System::UInt32 limit; // 0x14
	};
}
