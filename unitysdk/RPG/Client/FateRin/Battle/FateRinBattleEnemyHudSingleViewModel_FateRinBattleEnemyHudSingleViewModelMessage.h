#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	enum class FateRinBattleEnemyHudSingleViewModel_FateRinBattleEnemyHudSingleViewModelMessage : ::System::Int32
	{
		None = 0,
		OnIntentChange = 1,
		OnHPChange = 2,
		OnPhaseChange = 3,
		OnIsHudShowChange = 4,
		OnAliveStateChange = 5,
	};
}
