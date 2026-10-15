#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillTargetCandidateState : ::System::Int32
	{
		Valid = 0,
		FilterBySkillTargetFilter = 1,
		FitlerByModifierRestriction = 2,
		FilterByTaunt = 3,
		Unknown = 4,
	};
}
