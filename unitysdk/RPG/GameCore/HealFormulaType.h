#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HealFormulaType_TypeDefinitionIndex = 10442;

	enum class HealFormulaType : ::System::Int32
	{
		HealByHealerAttack = 0,
		HealByHealerDefence = 1,
		HealByHealerMaxHP = 2,
		HealByTargetMaxHP = 3,
		HealByTargetMaxHPExceptDirtyHP = 4,
		HealByTargetLostHP = 5,
		HealByBaseValue = 6,
		HealByBaseValueWithBonus = 7,
	};
}
