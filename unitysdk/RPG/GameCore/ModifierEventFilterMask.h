#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierEventFilterMask_TypeDefinitionIndex = 10506;

	enum class ModifierEventFilterMask : ::System::UInt16
	{
		None = 0,
		UseSkillOneMore = 1,
		InAttackPhase = 2,
		SilenceSkill = 4,
		BlockPropertyModify = 8,
		ElationInsertAbility = 16,
		HPShareMortallyWonded = 32,
	};
}
