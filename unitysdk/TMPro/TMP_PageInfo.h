#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	struct alignas(4) TMP_PageInfo
	{
		::System::Int32 firstCharacterIndex; // 0x10
		::System::Int32 lastCharacterIndex; // 0x14
		::System::Single ascender; // 0x18
		::System::Single baseLine; // 0x1C
		::System::Single descender; // 0x20
	};
}
