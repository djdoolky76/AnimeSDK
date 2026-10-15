#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class DialogueUtil_DialogueTriggerReason : ::System::Int32
	{
		Undefined = 0,
		First = 1,
		Talk = 2,
		Mission = 3,
	};
}
