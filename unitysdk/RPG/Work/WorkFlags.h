#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Work
{
	enum class WorkFlags : ::System::Int32
	{
		None = 0,
		StartImmediately = 1,
		UseWorkerThread = 2,
		ExecuteWhenDependencyFail = 4,
		IgnoreByWorkCounter = 8,
	};
}
