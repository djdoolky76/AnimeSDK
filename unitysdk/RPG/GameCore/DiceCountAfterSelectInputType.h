#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCountAfterSelectInputType : ::System::Int32
	{
		DiceWithResult = 0,
		DiceConfirmed = 1,
		LastReRoll = 2,
	};
}
