#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AdventureSkillType : ::System::Int32
	{
		NormalAtk = 0,
		MazeSkill = 1,
		CustomSkill = 2,
		Unknown = 3,
	};
}
