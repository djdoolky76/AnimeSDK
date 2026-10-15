#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class QteCatchGhostRewindInstance_RewindPhase : ::System::Int32
	{
		Ready = 0,
		Escape = 1,
		Aim = 2,
		Drag = 3,
		Struggle = 4,
		Return = 5,
		Finish = 6,
	};
}
