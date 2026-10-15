#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class TouchScreenKeyboard_Status : ::System::Int32
	{
		Visible = 0,
		Done = 1,
		Canceled = 2,
		LostFocus = 3,
	};
}
