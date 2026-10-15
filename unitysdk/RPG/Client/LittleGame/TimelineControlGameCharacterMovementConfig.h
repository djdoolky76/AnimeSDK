#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TimelineControlGameCharacterMovementConfig_TypeDefinitionIndex = 42491;

	struct alignas(4) TimelineControlGameCharacterMovementConfig
	{
		::System::Single MoveSpeed; // 0x10
	};
}
