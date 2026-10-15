#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StateTreePhase : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
	};
}
