#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	enum class TeamTowersBrickSpecialViewType : ::System::Byte
	{
		None = 0,
		Locked = 1,
		Ice = 2,
		Stone = 4,
		Ivy = 8,
		IvyFinished = 16,
		Island = 32,
		Solid = 64,
		SilverWolf = 128,
	};
}
