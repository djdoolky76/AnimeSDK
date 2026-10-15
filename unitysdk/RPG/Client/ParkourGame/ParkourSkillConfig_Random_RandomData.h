#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }

namespace RPG::Client::ParkourGame
{
	struct alignas(8) ParkourSkillConfig_Random_RandomData
	{
		::RPG::Client::ParkourGame::ParkourSkillConfig* SkillConfig; // 0x10
		::System::Single Weight; // 0x18
	};
}
