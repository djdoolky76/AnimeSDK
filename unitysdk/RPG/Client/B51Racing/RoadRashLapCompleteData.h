#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	struct alignas(4) RoadRashLapCompleteData
	{
		::System::Int32 Lap; // 0x10
		::System::Single LapTime; // 0x14
		::System::Boolean IsBest; // 0x18
	};
}
