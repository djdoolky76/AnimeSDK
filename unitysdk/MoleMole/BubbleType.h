#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 40820;

	enum class BubbleType : ::System::Int32
	{
		ScoreUI2 = -8,
		NPCDomain = -1,
		Gold2 = -5,
		Task = -4,
		CountUp = -6,
		LevelQuest = 1,
		ScoreUI = -7,
		SwitchTeamLevel = -9,
		Fairy = 0,
		Gold = -2,
		CountDown = -3,
	};
}
