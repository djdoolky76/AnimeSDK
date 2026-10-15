#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ActivityIntroButton_ActivityIntroButtonConfig
	{
		::System::UInt32 TimeLimitActivityPanelID; // 0x10
		::System::UInt32 ResidentActivityPanelID; // 0x14
	};
}
