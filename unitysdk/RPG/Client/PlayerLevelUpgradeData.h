#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) PlayerLevelUpgradeData
	{
		::System::UInt32 Level; // 0x10
		::System::UInt32 Exp; // 0x14
		::System::UInt32 ExpAdd; // 0x18
	};
}
