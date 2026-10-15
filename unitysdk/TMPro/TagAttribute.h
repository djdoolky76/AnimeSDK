#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	struct alignas(4) TagAttribute
	{
		::System::Int32 startIndex; // 0x10
		::System::Int32 length; // 0x14
		::System::Int32 hashCode; // 0x18
	};
}
