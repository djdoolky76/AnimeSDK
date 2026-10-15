#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/DronesPuzzleAreaConfig.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DronesPuzzleAchieveAreaConfig_TypeDefinitionIndex = 78570;

	struct alignas(4) DronesPuzzleAchieveAreaConfig
	{
		::System::UInt32 questID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::Prop::DronesPuzzleAreaConfig areaConfig; // 0x18
	};
}
