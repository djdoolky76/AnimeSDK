#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatAbilityState_TypeDefinitionIndex = 37391;

	enum class DiceCombatAbilityState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
	};
}
