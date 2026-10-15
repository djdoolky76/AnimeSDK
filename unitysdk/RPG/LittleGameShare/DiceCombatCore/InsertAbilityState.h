#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class InsertAbilityState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Finished = 2,
	};
}
