#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	struct alignas(4) TimelineControlGameCharacterMovementConfig
	{
		::System::Single MoveSpeed; // 0x10
	};
}
