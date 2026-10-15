#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class MonopolyGameState : ::System::Int32
	{
		Ready = 0,
		Moving = 1,
		Pause = 2,
		Finish = 3,
		SwitchWorld = 4,
	};
}
