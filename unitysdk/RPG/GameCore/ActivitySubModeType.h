#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySubModeType_TypeDefinitionIndex = 57227;

	enum class ActivitySubModeType : ::System::Int32
	{
		Unknown = 0,
		EvolveBuild = 1,
		SwordTraining = 2,
		FightFest = 3,
		Fate = 4,
		FateRin = 5,
		Elation = 6,
		LocalLegend = 7,
		Expedition = 8,
		FinalityActivity = 9,
		RealityShowActivity = 10,
		GridFight = 11,
		RogueMagic = 12,
		RogueTourn = 13,
		Challenge = 14,
	};
}
