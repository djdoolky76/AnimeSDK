#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	struct alignas(4) RoadRashGameModifier_PlayerUltimateQTEWindow
	{
		::System::Single QTEStart; // 0x10
		::System::Single QTEEnd; // 0x14
		::System::Single Init; // 0x18
		::System::Single DurationSeconds; // 0x1C
	};
}
