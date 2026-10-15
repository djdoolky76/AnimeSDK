#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Promises
{
	enum class PromiseState : ::System::Int32
	{
		Pending = 0,
		Rejected = 1,
		Resolved = 2,
	};
}
