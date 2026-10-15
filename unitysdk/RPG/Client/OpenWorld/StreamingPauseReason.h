#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class StreamingPauseReason : ::System::Int32
	{
		Common = 0,
		TimeScale = 1,
	};
}
