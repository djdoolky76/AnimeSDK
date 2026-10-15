#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RedirectSkillTargetAffectTeam : ::System::Int32
	{
		All = 0,
		SameTeam = 1,
		EnemyTeam = 2,
	};
}
