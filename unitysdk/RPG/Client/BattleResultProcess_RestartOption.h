#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BattleResultProcess_RestartOption : ::System::Int32
	{
		Disable = 0,
		EnableWithSameTeam = 1,
		EnableWithEditTeam = 2,
	};
}
