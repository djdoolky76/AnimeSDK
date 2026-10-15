#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	enum class InputControlSourceType : ::System::Int32
	{
		None = 0,
		Button = 1,
		Analog = 2,
		KeyCode = 3,
	};
}
