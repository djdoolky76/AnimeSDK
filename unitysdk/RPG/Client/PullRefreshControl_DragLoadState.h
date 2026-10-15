#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PullRefreshControl_DragLoadState : ::System::Int32
	{
		None = 0,
		WaitContinueDrag = 1,
		WaitRelase = 2,
		WaitLoad = 3,
		Loaded = 4,
	};
}
