#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EntityTeamRelationTypeMask : ::System::UInt32
	{
		None = 0,
		All = 4294967295,
		Self = 1,
		Summoner = 2,
		FriendExcludeSummoner = 4,
		Enemy = 8,
		Friend = 6,
		SelfTeam = 7,
	};
}
