#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class AdventureEntityDieState : ::System::Int32
	{
		DieAnimation = 0,
		DelayAfterAnimation = 1,
		Finish = 2,
	};
}
