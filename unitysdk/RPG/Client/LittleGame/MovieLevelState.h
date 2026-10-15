#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	enum class MovieLevelState : ::System::Int32
	{
		Ready = 0,
		CountDown = 1,
		Playing = 2,
		Pause = 3,
		End = 4,
	};
}
