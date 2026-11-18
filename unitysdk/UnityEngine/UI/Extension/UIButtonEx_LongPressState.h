#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIButtonEx_LongPressState_TypeDefinitionIndex = 48603;

	enum class UIButtonEx_LongPressState : ::System::Int32
	{
		Pressing = 2,
		UpPendingPress = 3,
		UpPendingDown = 4,
		Down = 1,
		Up = 0,
	};
}
