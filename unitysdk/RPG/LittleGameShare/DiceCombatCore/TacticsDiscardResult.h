#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsDiscardResult_TypeDefinitionIndex = 37447;

	enum class TacticsDiscardResult : ::System::Byte
	{
		Success = 0,
		CardNotInHand = 1,
		InvalidIndex = 2,
		SystemDisabled = 3,
	};
}
