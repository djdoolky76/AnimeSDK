#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LoadingStyle : ::System::Int32
	{
		LoadingStyleWhite = 0,
		LoadingStyleBlack = 1,
		LoadingStyleDefault = 2,
		LoadingStyleAdditivePreload = 3,
		LoadingStoryLine = 4,
		LoadingPamSnore = 5,
		AmphoreusDay = 6,
		AmphoreusNight = 7,
	};
}
