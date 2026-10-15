#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class TacticsBuyFinishResult : ::System::Byte
	{
		ContinueWaiting = 0,
		EnterNextState = 1,
		Invalid = 2,
	};
}
