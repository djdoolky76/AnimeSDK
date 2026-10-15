#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class FadingConsequenceClass : ::System::Int32
	{
		Transition = 0,
		VisibleShow = 1,
		HideVisualOnly = 2,
		HideWithRelease = 3,
		HideToPreload = 4,
	};
}
