#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int HollowShopCurrencyType_TypeDefinitionIndex = 23123;

	enum class HollowShopCurrencyType : ::System::Int32
	{
		HOLLOW_SHOP_CURRENCY_TYPE_STAMINA = 3,
		HOLLOW_SHOP_CURRENCY_TYPE_NONE = 0,
		HOLLOW_SHOP_CURRENCY_TYPE_COIN = 1,
		HOLLOW_SHOP_CURRENCY_TYPE_CURSE_CURRENCY = 2,
	};
}
