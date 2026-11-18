#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESwitchType_TypeDefinitionIndex = 17276;

	enum class ESwitchType : ::System::UInt32
	{
		HollowPause = 8,
		BattleSetting = 20,
		SettingLang = 26,
		GroceryShop = 12,
		Mail = 16,
		Empty = 0,
		WorkShop = 13,
		VHSStore = 19,
		EquipShop = 5,
		Setting = 17,
		HollowItem = 11,
		Equip = 1,
		SettingPicture = 23,
		QTEManualModeSwitch = 15,
		Ramen = 10,
		StoryModeSwitch = 9,
		Hollow = 6,
		SettingUser = 27,
		EquipDecompose = 4,
		DebugPay = 18,
		Login = 3,
		Navigation = 7,
		EquipGacha = 2,
		InterKnot = 14,
		Archive = 22,
		BattleInfo = 21,
		SettingVoice = 25,
		SettingInput = 24,
	};
}
