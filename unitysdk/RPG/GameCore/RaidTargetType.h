#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RaidTargetType : ::System::Int32
	{
		None = 0,
		DeadAvatarCount = 1,
		BattleRoundCount = 2,
		KillMonster = 3,
		ShieldBreakCount = 4,
		ClientCount = 5,
		ServerCount = 6,
	};
}
