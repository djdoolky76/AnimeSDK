#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightBonusType_TypeDefinitionIndex = 13487;

	enum class GridFightBonusType : ::System::Int32
	{
		Gold = 0,
		Refresh = 2,
		SpecificAvatar = 5,
		RandomAvatar = 6,
		Item = 7,
		Exp = 8,
		Orb = 9,
		RandomEquipByCategory = 13,
		RandomEquipByFunc = 14,
		RandomSameAvatar = 15,
		SpecificAvatarWithEquip = 16,
		SpecificAvatarWithRandomEquip = 17,
		SpotLightReplaceCnt = 18,
		Augment = 19,
		SpotLightFreeRefreshCnt = 20,
		TrailblazeShopCoin = 21,
		ElationGoods = 22,
		GlobalHp = 23,
		ElationItem = 24,
		AllAvatarByRarity = 25,
	};
}
