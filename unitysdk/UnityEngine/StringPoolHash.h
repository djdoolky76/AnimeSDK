#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) StringPoolHash
	{
		::System::UInt32 hashValue; // 0x10
	};
}
