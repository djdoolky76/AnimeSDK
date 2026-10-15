#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ElfRestaurant
{
	enum class SIMGameState : ::System::Int32
	{
		Unknown = 0,
		Building = 1,
		Loading = 2,
		Game = 3,
		Result = 4,
		Finish = 5,
		Destroy = 6,
	};
}
