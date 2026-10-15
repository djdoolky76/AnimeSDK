#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	enum class FateRinCenterStyle : ::System::Int32
	{
		Number = 1,
		Icon = 2,
		PercentNumber = 4,
		FractionNumber = 8,
		BattleNumber = 16,
		AnyNumber = 29,
	};
}
