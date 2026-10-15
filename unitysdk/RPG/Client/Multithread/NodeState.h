#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Multithread
{
	enum class NodeState : ::System::Int32
	{
		WAITTING = 0,
		SCHEDULED = 1,
	};
}
