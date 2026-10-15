#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class OpType : ::System::Int32
	{
		Sync = 0,
		Async = 1,
	};
}
