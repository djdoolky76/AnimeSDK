#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class EntityLoadState : ::System::Int32
	{
		NotLoaded = 0,
		RootLoading = 1,
		RootIniting = 2,
		RootLoaded = 3,
		ArtLoading = 4,
		ArtLoaded = 5,
	};
}
