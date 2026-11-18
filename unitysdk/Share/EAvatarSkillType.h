#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EAvatarSkillType_TypeDefinitionIndex = 13503;

	enum class EAvatarSkillType : ::System::Int16
	{
		EnumCount = 7,
		AssistSkill = 6,
		CommonAttack = 0,
		Evade = 2,
		CooperateSkill = 3,
		SpecialAttack = 1,
		UniqueSkill = 4,
		CoreSkill = 5,
	};
}
