#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	enum class AlleyPackController_AlleyJoyStickState : ::System::Int32
	{
		None = 0,
		UINavigation = 1,
		GoodOperation = 2,
		CursorSelection = 3,
	};
}
