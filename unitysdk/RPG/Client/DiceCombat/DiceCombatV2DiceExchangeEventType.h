#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::DiceCombat
{
	enum class DiceCombatV2DiceExchangeEventType : ::System::Int32
	{
		Preview = 0,
		TeamMateRollFinish = 1,
		Start = 2,
		PrepareStateChanged = 3,
		SelfPlayerSwapDice = 4,
		OtherPlayerSwapDice = 5,
		SelfPlayerMarkDice = 6,
		OtherPlayerMarkDice = 7,
		Finish = 8,
		LeaveExchangeState = 9,
	};
}
