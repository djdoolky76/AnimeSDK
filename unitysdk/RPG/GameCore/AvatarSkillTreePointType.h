#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AvatarSkillTreePointType : ::System::Int32
	{
		Attribute = 1,
		Skill = 2,
		Extra = 3,
		Servant = 4,
		Special = 5,
	};
}
