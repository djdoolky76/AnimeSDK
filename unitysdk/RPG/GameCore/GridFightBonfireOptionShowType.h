#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonfireOptionShowType_TypeDefinitionIndex = 13571;

	enum class GridFightBonfireOptionShowType : ::System::Int32
	{
		None = 0,
		CopyRoleMaxStar = 2,
		CopyRoleMaxRarity = 3,
		CopyRoleMaxEquipCnt = 4,
		HpCondition = 5,
		PreGenBonus = 6,
	};
}
