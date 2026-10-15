#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SkillSubTargetType : ::System::Int32
	{
		Unknow = 0,
		TargetAllTeammate = 1,
		TargetAdjoinEntity = 2,
		TargetServantOrSummoner = 3,
	};
}
