#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class InControlTipType : ::System::Int32
	{
		Unknown = 0,
		Keyboard = 1,
		Mouse = 2,
		Controller = 3,
	};
}
