#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ConflictType : ::System::Int32
	{
		None = 0,
		NPC = 1,
		Region = 2,
	};
}
