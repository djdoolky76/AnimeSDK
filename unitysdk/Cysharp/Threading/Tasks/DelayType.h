#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	enum class DelayType : ::System::Int32
	{
		DeltaTime = 0,
		UnscaledDeltaTime = 1,
		Realtime = 2,
	};
}
