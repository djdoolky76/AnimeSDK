#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRogue_TurnInfo_TypeDefinitionIndex = 70710;

	struct alignas(4) WolfBroGunPlayRogue_TurnInfo
	{
		::System::Single Length; // 0x10
		::System::Single TargetScore; // 0x14
	};
}
