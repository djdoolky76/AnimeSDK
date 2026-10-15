#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class BattleEventLifeBinding : ::System::Int32
	{
		None = 0,
		Caster = 1,
		OrignalCaster = 2,
	};
}
