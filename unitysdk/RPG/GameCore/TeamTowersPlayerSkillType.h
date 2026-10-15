#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TeamTowersPlayerSkillType : ::System::Int32
	{
		Invalid = 0,
		ActiveSkill = 1,
		PassiveSkill = 2,
	};
}
