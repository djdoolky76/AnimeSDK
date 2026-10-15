#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ChimeraPhaseTargetType : ::System::Int32
	{
		None = 0,
		NoTarget = 1,
		BeatTeam = 2,
		TargetRank = 3,
	};
}
