#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ButtonQTETaskInputType_TypeDefinitionIndex = 53065;

	enum class ButtonQTETaskInputType : ::System::Int32
	{
		InLevelEvade = 4,
		None = 0,
		InLevelInteract = 9,
		InLevelSpecialAttack = 2,
		MonsterFantasyQTEEvade = 7,
		InLevelSwitchAvatar = 5,
		MonsterFantasyQTEAttack = 6,
		InLevelCommonSkill = 8,
		InLevelExQTEAttack = 3,
		InLevelNormalAttack = 1,
	};
}
