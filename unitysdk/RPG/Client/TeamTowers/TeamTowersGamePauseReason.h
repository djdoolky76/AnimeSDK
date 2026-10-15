#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	enum class TeamTowersGamePauseReason : ::System::Int32
	{
		None = 0,
		Task = 1,
		UI = 2,
	};
}
