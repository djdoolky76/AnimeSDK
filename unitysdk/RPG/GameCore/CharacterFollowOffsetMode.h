#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CharacterFollowOffsetMode : ::System::Int32
	{
		World = 0,
		Target = 1,
		TargetTeamFormation = 2,
		TeamCenter = 3,
		EnemyTeamCenter = 4,
		CustomFormationCenter = 5,
	};
}
