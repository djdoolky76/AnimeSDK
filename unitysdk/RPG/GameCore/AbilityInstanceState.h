#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AbilityInstanceState : ::System::Int32
	{
		EUnkonw = 0,
		Ready = 1,
		Executing = 2,
	};
}
