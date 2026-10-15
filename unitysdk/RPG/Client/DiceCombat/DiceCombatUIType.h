#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	enum class DiceCombatUIType : ::System::Int32
	{
		None = 0,
		MainPage = 1,
		BeforeActivityMainPage = 2,
		NPCEntrancePage = 3,
		PVEProgressPage = 4,
		PVEBattlePreparePage = 5,
		PVPBattlePreparePage = 6,
		TeamEditDialog = 7,
		NPCEntranceCardDisplayDialog = 8,
		GameLoadingDialog = 9,
		FriendListDialog = 10,
		GameResultPage = 11,
		ShopPage = 12,
		CollectionPage = 13,
		CardLevelUpPage = 14,
		ChangeDicePage = 15,
		GetItemDialog = 16,
	};
}
