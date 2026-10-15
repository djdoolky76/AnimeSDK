#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::AssetSystem::Test
{
	enum class AsyncStatus : ::System::Int32
	{
		None = 0,
		Started = 1,
		Completed = 2,
	};
}
