#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsBuyFinishResult_TypeDefinitionIndex = 36520;

	enum class TacticsBuyFinishResult : ::System::Byte
	{
		ContinueWaiting = 0,
		EnterNextState = 1,
		Invalid = 2,
	};
}
