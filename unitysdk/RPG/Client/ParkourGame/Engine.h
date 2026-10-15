#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EngineData.h"

namespace RPG::Client::ParkourGame
{
	struct alignas(8) Engine
	{
		::System::Single Mass; // 0x10
		::System::Int32 DefaultLevel; // 0x14
		::Il2CppArray<::RPG::Client::ParkourGame::EngineData>* Level; // 0x18
	};
}
