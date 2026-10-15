#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class AutoLayoutPerformType : ::System::Int32
	{
		AddImmediately = 0,
		RemoveImmediaetly = 1,
		SwitchPerform = 2,
		MaxHighlightPerform = 3,
	};
}
