#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueChestGroupType : ::System::Int32
	{
		None = 0,
		SideChest = 1,
		CoinRoomChest = 2,
		BossChest = 3,
		AdventureChest = 4,
		BasinChest = 5,
	};
}
