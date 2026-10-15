#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsRefreshResult_TypeDefinitionIndex = 36518;

	enum class TacticsRefreshResult : ::System::Byte
	{
		Success = 0,
		AlreadyRefreshedThisTurn = 1,
		NotEnoughTacticsPoint = 2,
		SystemDisabled = 3,
	};
}
