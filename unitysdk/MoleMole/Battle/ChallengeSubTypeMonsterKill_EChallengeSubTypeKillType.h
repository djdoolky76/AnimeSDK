#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType_TypeDefinitionIndex = 59349;

	enum class ChallengeSubTypeMonsterKill_EChallengeSubTypeKillType : ::System::Int16
	{
		FLOATING_KILL = 4,
		ULTRA_KILL = 2,
		None = -1,
		COUNTER_KILL = 9,
		QTE_Kill = 1,
		DESTRUCTION_KILL = 6,
		ASSAULT_AID_KILL = 7,
		TRAP_KILL = 8,
		ANY_SKILL_KILL = 5,
		BRANCH_KILL = 3,
	};
}
