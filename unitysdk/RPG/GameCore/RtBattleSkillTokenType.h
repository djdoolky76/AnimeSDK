#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RtBattleSkillTokenType : ::System::Int32
	{
		None = 0,
		MoveInSkill = 1,
		ExclusivePerform = 2,
	};
}
