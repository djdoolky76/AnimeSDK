#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTrailblazeGoodsType_TypeDefinitionIndex = 13849;

	enum class GridFightTrailblazeGoodsType : ::System::Int32
	{
		Bonus = 0,
		RefreshGoods = 1,
		Json = 2,
		MazeBuff = 3,
		Property = 4,
		Role = 5,
		TrailFuel = 6,
	};
}
