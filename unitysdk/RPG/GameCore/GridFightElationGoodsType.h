#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationGoodsType_TypeDefinitionIndex = 13852;

	enum class GridFightElationGoodsType : ::System::Int32
	{
		ElationGoodConsumable = 1,
		ElationGoodForge = 2,
		ElationGoodRandomBasicEquip = 3,
		ElationGoodRandonCraftEquip = 4,
		ElationGoodExpandSlot = 5,
		ElationGoodAddNormalEquip = 6,
	};
}
