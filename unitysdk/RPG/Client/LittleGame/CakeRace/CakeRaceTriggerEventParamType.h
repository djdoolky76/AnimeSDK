#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::CakeRace
{
	enum class CakeRaceTriggerEventParamType : ::System::Int32
	{
		ParticipantID = 0,
		MainCatID = 1,
		MainCatRank = 2,
		MainCatMoveState = 3,
		MainCatLastMoveState = 4,
		SubCatID = 5,
		BattleItemID = 6,
		CatView = 7,
		CatUI3DPerformancePrepareData = 8,
		GroundedCount = 9,
	};
}
