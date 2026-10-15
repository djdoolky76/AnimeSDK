#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::EmbeddedBrowser
{
	enum class PromiseState : ::System::Int32
	{
		Pending = 0,
		Rejected = 1,
		Resolved = 2,
	};
}
