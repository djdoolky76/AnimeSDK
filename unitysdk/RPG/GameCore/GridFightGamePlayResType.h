#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightGamePlayResType_TypeDefinitionIndex = 13518;

	enum class GridFightGamePlayResType : ::System::Int32
	{
		Exp = 1,
		ShopRefresh = 2,
		SpotLightResetPoint = 3,
		TrailblazeShopCoin = 4,
		GlobalHP = 5,
		SpotLightRefreshPoint = 6,
	};
}
