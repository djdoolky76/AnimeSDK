#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightAddItemSourceType_TypeDefinitionIndex = 10571;

	enum class GridFightAddItemSourceType : ::System::Int32
	{
		None = 0,
		Bonus = 1,
		ByThief = 2,
		ByTrait = 3,
		ByNpc = 4,
		Craft = 5,
		TraitEffectElation = 6,
		ByModifier = 7,
		Forge = 8,
		Supply = 9,
		ModifierTemp = 10,
		TraitEffectElationLaughPoint = 11,
	};
}
