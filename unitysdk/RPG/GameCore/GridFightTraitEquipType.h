#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitEquipType_TypeDefinitionIndex = 13842;

	enum class GridFightTraitEquipType : ::System::Int32
	{
		Unknown = 0,
		Attack = 1,
		Support = 2,
	};
}
