#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectSource_SourceType_TypeDefinitionIndex = 66024;

	enum class GridFightPreparationEffectSource_SourceType : ::System::Int32
	{
		Trait = 0,
		Augment = 1,
		Portal = 2,
		Equip = 3,
		Grid = 4,
		Role = 5,
		PetPal = 6,
	};
}
