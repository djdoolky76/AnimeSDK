#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LoadingDescGroup : ::System::Int32
	{
		None = 0,
		Default = 1,
		StoryLine = 2,
		World100 = 3100,
		World101 = 3101,
		World201 = 3201,
		World301 = 3301,
		World401 = 3401,
		World501 = 3501,
		World601 = 3601,
		World602 = 3602,
		NormalRule = 401,
		NormalIP = 402,
	};
}
