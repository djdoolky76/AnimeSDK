#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	struct alignas(4) Coord
	{
		::System::Int16 X; // 0x10
		::System::Int16 Y; // 0x12
	};
}
