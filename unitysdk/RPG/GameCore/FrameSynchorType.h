#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class FrameSynchorType : ::System::Int32
	{
		Offline = 0,
		Online = 1,
		Replay = 2,
	};
}
