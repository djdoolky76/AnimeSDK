#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class InputNoteType : ::System::Int32
	{
		ShortPress = 0,
		LongPress = 1,
		Release = 2,
	};
}
