#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) PlayerWorldLevelUpgradeData
	{
		::System::UInt32 Level; // 0x10
		::System::UInt32 WorldLevel; // 0x14
	};
}
