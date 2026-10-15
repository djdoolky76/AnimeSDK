#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ModifierWorking : ::System::Int32
	{
		Unknow = 0,
		OwnerTurn = 1,
		AnyOneTurn = 2,
	};
}
