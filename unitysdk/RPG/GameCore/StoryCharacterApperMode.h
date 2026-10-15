#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class StoryCharacterApperMode : ::System::Int32
	{
		Dither = 0,
		OnlyEffect = 1,
		DirectlySetDither = 2,
	};
}
