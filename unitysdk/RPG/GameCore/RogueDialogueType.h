#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class RogueDialogueType : ::System::Int32
	{
		None = 0,
		Story = 1,
		Event = 2,
		Store = 3,
	};
}
