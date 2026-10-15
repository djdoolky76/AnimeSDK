#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Marble
{
	enum class AISimulatePhase : ::System::Int32
	{
		Think = 0,
		Simulate = 1,
		Operate = 2,
	};
}
