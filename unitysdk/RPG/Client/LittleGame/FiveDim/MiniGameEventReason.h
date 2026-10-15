#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class MiniGameEventReason : ::System::Int32
	{
		Restart = 0,
		Fail = 1,
	};
}
