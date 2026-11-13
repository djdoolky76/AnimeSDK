#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayBossResult_TypeDefinitionIndex = 70694;

	struct alignas(4) WolfBroGunPlayBossResult
	{
		::System::Int32 HPBarCount; // 0x10
		::System::Single HPNormalized; // 0x14
	};
}
