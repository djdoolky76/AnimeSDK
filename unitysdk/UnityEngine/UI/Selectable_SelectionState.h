#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI
{
	enum class Selectable_SelectionState : ::System::Int32
	{
		Normal = 0,
		Highlighted = 1,
		Pressed = 2,
		Selected = 3,
		Disabled = 4,
	};
}
