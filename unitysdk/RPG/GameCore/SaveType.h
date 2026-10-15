#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SaveType : ::System::Int32
	{
		SAVE_WHEN_START = 0,
		SAVE_WHEN_FINISH = 1,
	};
}
