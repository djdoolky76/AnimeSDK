#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::NavMap
{
	enum class NavSpaceType : ::System::Int32
	{
		Invalid = 0,
		Normal = 1,
		FiveDim = 2,
	};
}
