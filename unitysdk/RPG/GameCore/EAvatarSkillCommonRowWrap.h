#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EAvatarSkillCommonRowWrap : ::System::Byte
	{
		None = 0,
		AvatarSkill = 1,
		AetherDivideSpiritSkill = 2,
		All = 255,
	};
}
