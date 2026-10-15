#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MThreadRunState : ::System::Int32
	{
		eNone = 0,
		eRun = 1,
		eEnd = 2,
	};
}
