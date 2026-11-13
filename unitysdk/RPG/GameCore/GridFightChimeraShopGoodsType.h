#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightChimeraShopGoodsType_TypeDefinitionIndex = 13857;

	enum class GridFightChimeraShopGoodsType : ::System::Int32
	{
		None = 0,
		Chimera = 1,
		Consumable = 2,
		Gold = 3,
	};
}
