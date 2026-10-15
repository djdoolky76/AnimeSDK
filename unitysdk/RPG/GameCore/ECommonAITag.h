#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ECommonAITag_TypeDefinitionIndex = 54344;

	enum class ECommonAITag : ::System::Byte
	{
		Undefined = 0,
		DamageNeedAttack = 1,
		DamageNeedDef = 2,
		DamageNeedHp = 3,
		DamageNeedNoCrit = 4,
		DamageNeedCrit = 5,
		DamageCarry = 6,
		TotalPowerWeight = 7,
	};
}
