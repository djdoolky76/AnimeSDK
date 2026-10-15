#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ElfCustomerState : ::System::Int32
	{
		Unknown = 0,
		Born = 1,
		Order = 2,
		WaitEating = 3,
		PrepareEating = 4,
		Eating = 5,
		Waiting = 6,
		Leave = 7,
		GoDrink = 8,
		GoExtraPay = 8,
	};
}
