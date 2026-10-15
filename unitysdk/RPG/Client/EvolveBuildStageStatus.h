#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class EvolveBuildStageStatus : ::System::Int32
	{
		Unknown = 0,
		Locked = 1,
		Unchallenged = 2,
		InProgress = 3,
		Challenged = 4,
	};
}
