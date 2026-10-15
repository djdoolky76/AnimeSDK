#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class TacticsRefreshResult : ::System::Byte
	{
		Success = 0,
		AlreadyRefreshedThisTurn = 1,
		NotEnoughTacticsPoint = 2,
		SystemDisabled = 3,
	};
}
