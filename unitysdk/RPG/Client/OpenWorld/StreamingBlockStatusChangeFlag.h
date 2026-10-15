#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class StreamingBlockStatusChangeFlag : ::System::Int32
	{
		RootEnable = 0,
		Transform = 1,
	};
}
