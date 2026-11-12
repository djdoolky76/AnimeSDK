#pragma once
#include "unitysdk/unitysdk.h"

namespace HkrpgProtoLog
{
	inline static constexpr unsigned int PlayerActionType_TypeDefinitionIndex = 25527;

	enum class PlayerActionType : ::System::Int32
	{
		PlayerActionNone = 0,
		PlayerActionMarbleFightGameBegin = 6873,
		PlayerActionMarbleFightGameEnd = 6874,
		PlayerActionMarbleFightGameRound = 6875,
		PlayerActionMarbleFightGameTurn = 6876,
		PlayerActionCakeRaceSectionBegin = 7142,
		PlayerActionCakeRaceSectionEnd = 7143,
		PlayerActionCakeRaceRoomSectionSettle = 7144,
		PlayerActionDiceCombatBegin = 7354,
		PlayerActionDiceCombatTurnEnd = 7355,
		PlayerActionDiceCombatEnd = 7356,
		PlayerActionTeamTowersPvpStart = 7672,
		PlayerActionTeamTowersPvpEnd = 7673,
		PlayerActionMarbleCoopBossBegin = 7692,
		PlayerActionMarbleCoopBossEnd = 7693,
		PlayerActionMarbleCoopBossRoundBegin = 7694,
		PlayerActionMarbleCoopBossRoundEnd = 7695,
		PlayerActionMarbleCoopBossTurn = 7696,
		PlayerActionDiceCombatV2Begin = 7477,
		PlayerActionDiceCombatV2TurnEnd = 7478,
		PlayerActionDiceCombatV2End = 7479,
		PlayerActionDiceCombatV2TacticsPointChange = 7480,
		PlayerActionDiceCombatV2TacticsCardChange = 7481,
		PlayerActionDiceCombatV2DiceChangeRequest = 7482,
		PlayerActionDiceCombatV2DiceChange = 7483,
		PlayerActionFightCsharpFrameworkEnd = 501000,
	};
}
