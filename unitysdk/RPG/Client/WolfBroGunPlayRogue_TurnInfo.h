#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) WolfBroGunPlayRogue_TurnInfo
	{
		::System::Single Length; // 0x10
		::System::Single TargetScore; // 0x14
	};
}
