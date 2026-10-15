#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueMiracleCategory : ::System::Int32
	{
		None = 0,
		Common = 1,
		Rare = 2,
		Legendary = 3,
		Negative = 4,
		Hex = 5,
	};
}
