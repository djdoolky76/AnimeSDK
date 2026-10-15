#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class VirtualCursorStatus : ::System::Int32
	{
		Normal = 1,
		Highlight = 2,
		Selected = 3,
	};
}
