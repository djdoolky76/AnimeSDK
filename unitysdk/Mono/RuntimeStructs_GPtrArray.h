#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono
{
	struct alignas(8) RuntimeStructs_GPtrArray
	{
		::PVOID data; // 0x10
		::System::Int32 len; // 0x18
	};
}
