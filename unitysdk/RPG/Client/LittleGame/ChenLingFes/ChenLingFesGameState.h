#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	enum class ChenLingFesGameState : ::System::Int32
	{
		Unknown = 0,
		Loading = 1,
		Game = 2,
		Result = 3,
		Finish = 4,
		Destroy = 5,
	};
}
