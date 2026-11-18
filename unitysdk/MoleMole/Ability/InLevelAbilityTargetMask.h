#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Ability
{
	inline static constexpr unsigned int InLevelAbilityTargetMask_TypeDefinitionIndex = 44010;

	enum class InLevelAbilityTargetMask : ::System::Int32
	{
		None = 0,
		Buddy_Support = 32768,
		Enemy_Elite = 256,
		Buddy_Fight = 16384,
		SceneObject = 262144,
		Avatar_AvatarC = 16,
		Enemy_Boss = 512,
		Enemy_Destruction = 1024,
		Avatar_TeamAvatar = 1048576,
		Avatar_Shell_Buddy = 131072,
		Enemy_Normal = 128,
		Enemy = 64,
		Buddy = 32,
		Avatar = 1,
		Level = 2048,
		Avatar_AvatarA = 4,
		Buddy_Partner = 65536,
		Avatar_AvatarB = 8,
		Avatar_PartnerAvatar = 2097152,
		Avatar_TeamEntity = 2,
		Enemy_LevelEnd = 4096,
		Enemy_LevelFin = 8192,
		GoodMonster = 524288,
	};
}
