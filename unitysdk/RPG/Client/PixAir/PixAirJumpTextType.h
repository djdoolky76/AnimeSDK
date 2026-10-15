#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	enum class PixAirJumpTextType : ::System::Int32
	{
		Damage = 0,
		Heal = 1,
		Burn = 2,
		Shield = 3,
	};
}
