#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	enum class ChenLingSoldierState : ::System::Int32
	{
		Invalid = 0,
		Available = 1,
		UseAbility = 4,
		Dying = 2,
		Dead = 3,
	};
}
