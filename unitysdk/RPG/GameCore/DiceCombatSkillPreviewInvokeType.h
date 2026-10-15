#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DiceCombatSkillPreviewInvokeType : ::System::Int32
	{
		OnSelectDice = 1,
		OnRollDiceResult = 2,
	};
}
