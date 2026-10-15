#pragma once
#include "unitysdk/unitysdk.h"
	enum class FBAOECBDMIC_RF_BossSkillProgressComponent : ::System::Byte
	{
		CurSkillID = 1,
		ProgressType = 2,
		ViewType = 4,
		SkillStartTimeMs = 8,
		SkillEndTimeMs = 16,
		MaxCount = 32,
		RemainingCount = 64,
		Max = 127,
	};
