#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MusicRhythmGroupState : ::System::Int32
	{
		Started = 0,
		Locked = 1,
		Finish = 2,
	};
}
