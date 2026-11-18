#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowShopType_TypeDefinitionIndex = 14043;

	enum class EHollowShopType : ::System::Int16
	{
		Gachashop = 6,
		Item = 1,
		All = 0,
		Card = 2,
		EnumCount = 7,
		HollowItem = 4,
		Curse = 3,
		Discount = 5,
	};
}
