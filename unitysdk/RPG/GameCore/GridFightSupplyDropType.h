#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSupplyDropType_TypeDefinitionIndex = 10565;

	enum class GridFightSupplyDropType : ::System::Int32
	{
		None = 0,
		RoleRarity = 1,
		Item = 2,
		EquipCategory = 3,
	};
}
