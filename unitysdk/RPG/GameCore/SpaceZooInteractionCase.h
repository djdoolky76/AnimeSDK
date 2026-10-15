#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class SpaceZooInteractionCase : ::System::Int32
	{
		None = 0,
		Unfilled = 1,
		SameChannel = 2,
		SameFeature = 3,
		Special = 4,
	};
}
