#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class QuitBattleSubType : ::System::Int32
	{
		Normal = 0,
		EvolveBuildGiveUp = 1,
	};
}
