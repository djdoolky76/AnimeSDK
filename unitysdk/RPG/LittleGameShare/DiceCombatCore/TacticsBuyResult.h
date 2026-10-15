#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsBuyResult_TypeDefinitionIndex = 36517;

	enum class TacticsBuyResult : ::System::Byte
	{
		Success = 0,
		CardNotInShop = 1,
		NotEnoughTacticsPoint = 2,
		HandIsFull = 3,
		SystemDisabled = 4,
	};
}
