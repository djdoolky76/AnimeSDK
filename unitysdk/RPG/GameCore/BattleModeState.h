#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleModeState : ::System::Int32
	{
		None = 0,
		Init = 1,
		Load = 2,
		Running = 3,
		Finish = 4,
		Stop = 5,
	};
}
