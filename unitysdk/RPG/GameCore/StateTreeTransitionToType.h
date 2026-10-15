#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StateTreeTransitionToType : ::System::Int32
	{
		SpecifiedState = 0,
		NextState = 1,
		TreeSucceed = 2,
		TreeFail = 3,
		NextValidState = 4,
	};
}
