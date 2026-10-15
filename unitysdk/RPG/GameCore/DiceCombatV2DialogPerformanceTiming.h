#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatV2DialogPerformanceTiming : ::System::Int32
	{
		BeforeTurnPrepareToast = 0,
		BeforeBossChangePhase = 1,
	};
}
