#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	struct alignas(4) BlurParam
	{
		::System::Single BlurScale; // 0x10
		::System::Single Brightness; // 0x14
	};
}
