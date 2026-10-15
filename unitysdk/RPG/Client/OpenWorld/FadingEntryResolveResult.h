#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class FadingEntryResolveResult : ::System::Int32
	{
		KeepActive = 0,
		RemoveOnly = 1,
		ImmediateFinish = 2,
	};
}
