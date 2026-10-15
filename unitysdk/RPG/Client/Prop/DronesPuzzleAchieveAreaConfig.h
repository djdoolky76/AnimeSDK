#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"

namespace RPG::Client::Prop
{
	struct alignas(4) DronesPuzzleAchieveAreaConfig
	{
		::System::UInt32 questID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::DronesPuzzleAreaConfig areaConfig; // 0x18
	};
}
