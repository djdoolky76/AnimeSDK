#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MusicRhythmLevelResultType : ::System::Int32
	{
		Perfect = 0,
		Normal = 1,
		Miss = 2,
		Combo = 3,
	};
}
