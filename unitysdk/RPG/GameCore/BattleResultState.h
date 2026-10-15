#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleResultState : ::System::Int32
	{
		Win = 0,
		Lose = 1,
		Quit = 2,
		Error = 3,
		KickOut = 4,
		OutOfDate = 5,
	};
}
