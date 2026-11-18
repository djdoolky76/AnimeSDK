#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle
{
	inline static constexpr unsigned int ChallengeSubTypeCharacterCounter_StatusTypeCounter_TypeDefinitionIndex = 45368;

	enum class ChallengeSubTypeCharacterCounter_StatusTypeCounter : ::System::Int32
	{
		BE_HIT_COUNT = 1,
		NONE = 0,
		ULTRA_SKILL_COUNT = 3,
		QTE_SKILL_COUNT = 2,
		ANY_HIT = 4,
	};
}
