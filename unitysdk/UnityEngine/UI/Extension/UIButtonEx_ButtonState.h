#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_ButtonState_TypeDefinitionIndex = 48607;

	enum class UIButtonEx_ButtonState : ::System::Int32
	{
		Highlighted = 2,
		Pressed = 1,
		Disabled = 3,
		Normal = 0,
	};
}
