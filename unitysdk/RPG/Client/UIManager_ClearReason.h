#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class UIManager_ClearReason : ::System::Int32
	{
		GamePhaseChanged = 0,
		Dispose = 1,
	};
}
