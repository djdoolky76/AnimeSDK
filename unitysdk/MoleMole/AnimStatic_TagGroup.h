#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int AnimStatic_TagGroup_TypeDefinitionIndex = 64174;

	enum class AnimStatic_TagGroup : ::System::Int32
	{
		MuteMove = 0,
		AttackOrSkill = 3,
		MuteSkill = 1,
		Movement = 5,
		MuteSteer = 2,
		Stable = 4,
	};
}
