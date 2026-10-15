#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	template <typename T>
	struct alignas(4) BaseConfigHeader_1_NativeRowInfo
	{
		::System::Int32 Item1; // 0x0
		::System::Int32 Item2; // 0x0
		::System::Byte Item3; // 0x0
	};
}
