#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ActivitySummonSkillType : ::System::Int32
	{
		AvatarSkill = 1,
		AvatarUltimate = 2,
		SummonerSkill = 3,
		SummonerPassive = 4,
	};
}
