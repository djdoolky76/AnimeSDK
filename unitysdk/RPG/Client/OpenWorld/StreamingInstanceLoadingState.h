#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::OpenWorld
{
	enum class StreamingInstanceLoadingState : ::System::Int16
	{
		Empty = 0,
		Pending = 1,
		Loading = 2,
	};
}
