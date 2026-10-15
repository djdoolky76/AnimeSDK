#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	enum class DiceCombatGameState : ::System::Byte
	{
		WaitPlayerEnterAndLoading = 1,
		Coin = 2,
		TurnPrepare = 3,
		TacticsBuy = 4,
		AttackerRollDice = 5,
		AttackerSwapDice = 6,
		PreAttackerConfirmDiceModifier = 7,
		AttackerConfirmDiceModifier = 8,
		DefenderRollDice = 9,
		DefenderSwapDice = 10,
		PreDefenderConfirmDiceModifier = 11,
		DefenderConfirmDiceModifier = 12,
		Combat = 13,
		TurnEnd = 14,
		GameFinish = 15,
	};
}
