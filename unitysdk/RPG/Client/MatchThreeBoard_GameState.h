#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MatchThreeBoard_GameState : ::System::Int32
	{
		Idle = 0,
		SelectionStarted = 1,
		PropUse = 2,
		PropSelectionStarted = 3,
	};
}
