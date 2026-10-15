#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	struct alignas(4) TimelineControlGameCharacterVisionConfig
	{
		::System::Single VisionAngle; // 0x10
		::System::Single VisionLength; // 0x14
	};
}
