#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FightFestCoachType : ::System::Int32
	{
		Unknow = 0,
		ActiveSkill = 1,
		PassiveSkillFirst = 2,
		PassiveSkillSecond = 3,
	};
}
