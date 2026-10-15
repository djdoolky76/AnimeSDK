#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class ShowType : ::System::Int32
	{
		Always = 0,
		ShowAfterFinish = 1,
		NotShow = 4,
		HiddenDesc = 5,
	};
}
