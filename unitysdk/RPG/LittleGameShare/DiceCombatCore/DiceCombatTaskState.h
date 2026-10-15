#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class DiceCombatTaskState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Success = 2,
		Fail = 3,
	};
}
