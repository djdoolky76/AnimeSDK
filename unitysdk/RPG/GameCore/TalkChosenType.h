#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class TalkChosenType : ::System::Int32
	{
		undefined = 0,
		loop = 1,
		random = 2,
	};
}
