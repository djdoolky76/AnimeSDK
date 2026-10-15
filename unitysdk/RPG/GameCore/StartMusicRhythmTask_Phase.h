#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StartMusicRhythmTask_Phase : ::System::Int32
	{
		None = 0,
		WaitReadyPage = 1,
		WaitLoading = 2,
		Tutorial = 3,
		Transition = 4,
		Formal = 5,
	};
}
