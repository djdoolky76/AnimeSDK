#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	enum class TeamTowersCorePlayerDrawReason : ::System::Byte
	{
		Leave = 0,
		TeammateDraw = 1,
		KickOut = 2,
	};
}
