#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightClaraEnhanceCategory_TypeDefinitionIndex = 13863;

	enum class GridFightClaraEnhanceCategory : ::System::Int32
	{
		Default = 0,
		Counter = 1,
		Missile = 2,
		Summon = 3,
		Ultra = 4,
	};
}
