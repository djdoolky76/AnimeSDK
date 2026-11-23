#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_BB341200D0B3ACFD_TypeDefinitionIndex = 14575;

	enum class HID_BB341200D0B3ACFD : ::System::Int32
	{
		Physical = 0,
		Application = 1,
		Logical = 2,
		Report = 3,
		NamedArray = 4,
		UsageSwitch = 5,
		UsageModifier = 6,
	};
}
