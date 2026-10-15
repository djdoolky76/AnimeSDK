#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class TacticsCardUseCheckResult : ::System::Byte
	{
		Success = 0,
		TurnMismatch = 1,
		InvalidGameState = 2,
		NotChallenger = 3,
		InvalidIndex = 4,
		CardConfigNotFound = 5,
		TypeMismatch = 6,
		EmptyRequest = 7,
		DuplicateIndex = 8,
		SystemDisabled = 9,
	};
}
