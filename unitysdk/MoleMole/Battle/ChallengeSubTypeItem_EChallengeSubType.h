#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeItem_EChallengeSubType_TypeDefinitionIndex = 53302;

	enum class ChallengeSubTypeItem_EChallengeSubType : ::System::Int16
	{
		AliveOrNpcGuard = 3,
		ExploreCollect = 4,
		None = -1,
		LevelConditionLink = 7,
		MonsterKill = 1,
		OccupyInteractive = 5,
		CharacterStatus = 2,
		RegionVisited = 6,
		ManualCondition = 8,
	};
}
