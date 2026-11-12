#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectType_TypeDefinitionIndex = 66022;

	enum class GridFightPreparationEffectType : ::System::Int32
	{
		RoleCraftEquipAfterBattle = 0,
		PetPalBonus = 1,
		AddTraitBonusProgress = 2,
	};
}
