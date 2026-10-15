#pragma once
#include "unitysdk/unitysdk.h"

namespace TMPro
{
	struct alignas(4) TMP_SpriteInfo
	{
		::System::Int32 spriteIndex; // 0x10
		::System::Int32 characterIndex; // 0x14
		::System::Int32 vertexIndex; // 0x18
	};
}
