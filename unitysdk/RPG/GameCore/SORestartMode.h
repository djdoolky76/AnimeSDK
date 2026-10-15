#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SORestartMode : ::System::Int32
	{
		RestartFromSO = 0,
		RestartFromPoint = 1,
		RestartFromTask = 2,
	};
}
