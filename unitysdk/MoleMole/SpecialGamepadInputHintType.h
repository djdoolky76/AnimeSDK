#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int SpecialGamepadInputHintType_TypeDefinitionIndex = 51824;

	enum class SpecialGamepadInputHintType : ::System::Int32
	{
		None = 0,
		RightStick = 2,
		DPadUpDown = 4,
		DPadLeftRight = 5,
		DPadUpDownLeftRight = 3,
		LeftStick = 1,
		MouseMiddleButtonScroll = 6,
	};
}
