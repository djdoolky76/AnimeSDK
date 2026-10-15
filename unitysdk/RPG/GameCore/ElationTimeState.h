#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ElationTimeState : ::System::Int32
	{
		Invalid = 0,
		Executing = 1,
		Paused = 2,
		WaitEnd = 3,
		End = 4,
	};
}
