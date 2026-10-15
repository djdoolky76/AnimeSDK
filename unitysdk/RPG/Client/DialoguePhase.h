#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DialoguePhase : ::System::Int32
	{
		NotInDialogue = 0,
		First = 1,
		Second = 2,
	};
}
