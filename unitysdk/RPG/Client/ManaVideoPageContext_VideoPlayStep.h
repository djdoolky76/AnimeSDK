#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ManaVideoPageContext_VideoPlayStep : ::System::Int32
	{
		None = 0,
		Init = 1,
		Prepare = 2,
		Play = 3,
	};
}
