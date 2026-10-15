#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueDLC1Dot3ImmediateNotifyType : ::System::Int32
	{
		Unknow = 0,
		DiceTurnPanelRefresh = 1,
		DiceRemove = 2,
		CompassInteract = 3,
		RayInteract = 4,
		CandyCrashRoundEnd = 5,
		CandyCrashRoundUIRefresh = 6,
		CandyCrashGameEnd = 7,
	};
}
