#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	struct alignas(4) RoadRashSpeedData
	{
		::System::Single Speed; // 0x10
		::System::Single MaxSpeed; // 0x14
	};
}
