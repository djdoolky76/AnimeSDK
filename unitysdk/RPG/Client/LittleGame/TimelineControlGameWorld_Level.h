#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelGroup.h"

namespace RPG::Client::LittleGame
{
	struct alignas(8) TimelineControlGameWorld_Level
	{
		::Il2CppArray<::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroup>* Groups; // 0x10
	};
}
