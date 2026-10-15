#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class WorkNodeState : ::System::Int32
	{
		None = 0,
		Waitting = 1,
		Loading = 2,
		Finish = 3,
		Cancel = 4,
		Uninit = 5,
	};
}
