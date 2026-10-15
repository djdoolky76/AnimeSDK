#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PixAirBasicType : ::System::Int32
	{
		None = 0,
		MaxHp = 1,
		Lifes = 2,
		Income = 3,
		Coins = 4,
		OneShotShield = 5,
	};
}
