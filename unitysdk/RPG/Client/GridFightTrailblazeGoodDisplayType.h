#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeGoodDisplayType_TypeDefinitionIndex = 67278;

	enum class GridFightTrailblazeGoodDisplayType : ::System::Int32
	{
		Consumable = 0,
		Equip = 1,
		Role = 2,
		Refresh = 3,
		ShopRefresh = 4,
		Coin = 5,
		TrailFuel = 6,
		MazeBuff = 7,
		Property = 8,
		Exp = 9,
	};
}
