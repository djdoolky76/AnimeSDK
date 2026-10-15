#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class PlayerFlipState : ::System::Int32
	{
		Finish = 0,
		StartFlip = 1,
		NiceFlip = 2,
		FlipPause = 3,
		FlipResume = 4,
	};
}
