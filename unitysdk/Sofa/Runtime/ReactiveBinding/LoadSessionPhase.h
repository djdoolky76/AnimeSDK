#pragma once
#include "unitysdk/unitysdk.h"

namespace Sofa::Runtime::ReactiveBinding
{
	enum class LoadSessionPhase : ::System::Int32
	{
		Idle = 0,
		LoadingResource = 1,
		ResourceReady = 2,
		CreatingView = 3,
		Completed = 4,
		ResourceFailed = 5,
		ViewFailed = 6,
	};
}
