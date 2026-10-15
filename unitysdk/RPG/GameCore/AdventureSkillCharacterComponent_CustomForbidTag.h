#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureSkillCharacterComponent_CustomForbidTag : ::System::Int32
	{
		None = 0,
		NormalAttack = 1,
		MazeSkill = 2,
		NormalAttackAndMazeSkill = 3,
	};
}
