#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class LoadingFuncType : ::System::Int32
	{
		None = 0,
		WorldTele = 1,
		StoryLine = 2,
	};
}
