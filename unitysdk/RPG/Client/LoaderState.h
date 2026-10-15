#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class LoaderState : ::System::Int32
	{
		None = 0,
		WillLoad = 1,
		WillUnload = 2,
		InUse = 3,
	};
}
