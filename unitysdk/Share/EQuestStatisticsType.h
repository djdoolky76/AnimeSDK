#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EQuestStatisticsType_TypeDefinitionIndex = 10104;

	enum class EQuestStatisticsType : ::System::Byte
	{
		CostTime = 3,
		ArrivedLevel = 1,
		RebornTimes = 8,
		TotalCoinUse = 14,
		EventCount = 2,
		FinishedEventTypeCount = 9,
		FinishedEventIDCount = 10,
		EnumBegin = 1,
		ArcanaCount = 5,
		StaminaOverLevelTimes = 7,
		BangBooDreamLayer = 99,
		TarotCardCount = 6,
		EnumEnd = 100,
		KilledEnemyCount = 4,
	};
}
