#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	enum class WhenEachState : ::System::Byte
	{
		NotRunning = 0,
		Running = 1,
		Completed = 2,
	};
}
