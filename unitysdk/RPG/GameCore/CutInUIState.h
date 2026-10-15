#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class CutInUIState : ::System::Int32
	{
		Clicked = 0,
		PreCutIn = 1,
		CutInStart = 2,
		CutInEnd = 3,
	};
}
