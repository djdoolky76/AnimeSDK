#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtInsertActionPhase : ::System::Int32
	{
		Init = 0,
		Waiting = 1,
		Executing = 2,
		Finish = 3,
		Cancel = 4,
	};
}
