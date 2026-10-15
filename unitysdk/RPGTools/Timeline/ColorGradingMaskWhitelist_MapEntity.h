#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline
{
	struct alignas(4) ColorGradingMaskWhitelist_MapEntity
	{
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::System::Single FadeTime; // 0x18
	};
}
