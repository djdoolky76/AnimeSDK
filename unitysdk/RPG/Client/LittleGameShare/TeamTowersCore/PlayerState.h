#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	enum class PlayerState : ::System::Int32
	{
		Alive = 0,
		Dead = 1,
		Leave = 2,
	};
}
