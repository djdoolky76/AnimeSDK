#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RaidLimitType : ::System::Int32
	{
		Unknown = 0,
		IncludeAvatar = 1,
		TeamLevel = 2,
		HasMainMission = 3,
		TeamAvatarMinCount = 4,
		FinishQuest = 5,
		IncludeAnyHeroAvatar = 6,
	};
}
