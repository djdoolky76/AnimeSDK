#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class MissingVideoProcessType : ::System::Int32
	{
		MarkOnly = 0,
		RestartGame = 1,
	};
}
