#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLingFes
{
	enum class ChenLingFesJoyStickState : ::System::Int32
	{
		None = 0,
		UINavigation = 1,
		ItemOperation = 2,
		CursorSelection = 3,
	};
}
