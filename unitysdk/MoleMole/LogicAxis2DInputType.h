#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LogicAxis2DInputType_TypeDefinitionIndex = 79441;

	enum class LogicAxis2DInputType : ::System::Int32
	{
		GamepadLeftStick = 0,
		GamepadDpad = 7,
		PhotoModeZoom = 4,
		MousePositionDeltaRaw = 5,
		None = -1,
		MouseScroll = 3,
		MousePosition = 6,
		InLevelCameraMousePositionDelta = 2,
		GamepadRightStick = 1,
	};
}
