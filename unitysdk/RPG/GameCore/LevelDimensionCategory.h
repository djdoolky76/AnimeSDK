#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LevelDimensionCategory : ::System::Int32
	{
		Main = 0,
		StoryLine = 1,
		ActivityEarlyAccess = 2,
		ActivityFirstAccess = 3,
		Custom = 4,
		ActivityReview = 5,
		SocialPlayer = 6,
	};
}
