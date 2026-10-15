#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class StreamingItemEnableReason : ::System::Int32
	{
		SceneItemHLOD = 0,
		Environment = 1,
		LevelEditor = 2,
	};
}
