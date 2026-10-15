#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class DiceCombatDiceEffectType : ::System::Int32
	{
		None = 0,
		SamePointUpAtk = 1,
		AddRerollCount = 2,
	};
}
