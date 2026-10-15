#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DialogueMode : ::System::Int32
	{
		Default = 0,
		NoNPC = 1,
		Record = 2,
	};
}
