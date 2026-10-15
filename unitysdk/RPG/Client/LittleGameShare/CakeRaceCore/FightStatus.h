#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	enum class FightStatus : ::System::Int32
	{
		None = 0,
		EffectShow = 1,
		Fight = 2,
		FightEndShowAdjustPos = 3,
	};
}
