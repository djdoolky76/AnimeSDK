#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) WolfBroGunPlayBossResult
	{
		::System::Int32 HPBarCount; // 0x10
		::System::Single HPNormalized; // 0x14
	};
}
