#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class PixAirEnchantmentType : ::System::Int32
	{
		None = 0,
		Damage = 1,
		Burn = 2,
		Shield = 3,
		MultiCast = 4,
		Jam = 5,
	};
}
