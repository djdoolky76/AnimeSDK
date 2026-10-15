#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class WaitLevelGraphFinishMode : ::System::Int32
	{
		FinishOrDispose = 0,
		Finish = 1,
		Dispose = 2,
	};
}
