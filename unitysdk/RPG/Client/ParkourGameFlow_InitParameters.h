#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ParkourGameFlow_InitParameters
	{
		::System::UInt32 StartLevelID; // 0x10
		::System::UInt32 LevelGroupID; // 0x14
	};
}
