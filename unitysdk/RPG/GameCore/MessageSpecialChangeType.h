#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class MessageSpecialChangeType : ::System::Int32
	{
		None = 0,
		Flash = 1,
		HackIn = 2,
		HackOut = 3,
	};
}
