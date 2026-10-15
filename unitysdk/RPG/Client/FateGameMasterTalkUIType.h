#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class FateGameMasterTalkUIType : ::System::Int32
	{
		None = 0,
		PreBattleOverview = 1,
		PreBattleVS = 2,
		PostBattleVS = 3,
		PostBattleOverview = 4,
	};
}
