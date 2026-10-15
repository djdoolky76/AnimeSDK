#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	enum class FiveDimMiniGameExitType : ::System::Int32
	{
		LoseHp = 0,
		Restart = 1,
		Leave = 2,
	};
}
