#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	struct alignas(4) TMP_Text_UnicodeChar
	{
		::System::Int32 unicode; // 0x10
		::System::Int32 stringIndex; // 0x14
		::System::Int32 length; // 0x18
	};
}
