#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Coord.h"
#include "unitysdk/System/SmallRect.h"

namespace System
{
	struct alignas(4) ConsoleScreenBufferInfo
	{
		::System::Coord Size; // 0x10
		::System::Coord CursorPosition; // 0x14
		::System::Int16 Attribute; // 0x18
		::System::SmallRect Window; // 0x1A
		::System::Coord MaxWindowSize; // 0x22
	};
}
