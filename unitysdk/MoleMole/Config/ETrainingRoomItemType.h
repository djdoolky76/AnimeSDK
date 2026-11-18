#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 91127;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		AvatarTeamFever = 7,
		CanStunEnemy = 3,
		AvatarSuperSP = 5,
		EnemyLevel = 4,
		AvatarPrefectSwitchPoint = 6,
		EnemyInvicible = 2,
		EnemyAI = 1,
		SlelectEnemy = 0,
	};
}
