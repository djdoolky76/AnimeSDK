#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarSkillCommonRowWrap_TypeDefinitionIndex = 56551;

	enum class EAvatarSkillCommonRowWrap : ::System::Byte
	{
		None = 0,
		AvatarSkill = 1,
		AetherDivideSpiritSkill = 2,
		All = 255,
	};
}
