#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class QuestUnlockType : ::System::Int32
	{
		Unknown = 0,
		AutoUnlock = 1,
		FinishQuest = 2,
		FinishMission = 3,
		BattlePassWeekly = 4,
		ManualUnlock = 5,
		CakeCatchNotFinish = 6,
	};
}
