#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	enum class FateRinBattleHudDragBrain_DragIntent : ::System::Int32
	{
		Undecided = 0,
		UseIntent = 1,
		SwitchIntent = 2,
	};
}
