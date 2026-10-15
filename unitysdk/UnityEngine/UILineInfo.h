#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) UILineInfo
	{
		::System::Int32 startCharIdx; // 0x10
		::System::Int32 height; // 0x14
		::System::Single topY; // 0x18
		::System::Single leading; // 0x1C
	};
}
