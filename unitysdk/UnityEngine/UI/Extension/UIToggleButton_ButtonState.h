#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIToggleButton_ButtonState_TypeDefinitionIndex = 75177;

	enum class UIToggleButton_ButtonState : ::System::Int32
	{
		Toggled = 3,
		Highlighted = 2,
		Disable = 4,
		Normal = 0,
		Pressed = 1,
	};
}
