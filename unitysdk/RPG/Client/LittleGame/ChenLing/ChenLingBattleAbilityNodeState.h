#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChenLing
{
	enum class ChenLingBattleAbilityNodeState : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
		Finished = 2,
		InValid = 3,
	};
}
