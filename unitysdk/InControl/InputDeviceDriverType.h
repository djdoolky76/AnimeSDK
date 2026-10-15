#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceDriverType_TypeDefinitionIndex = 40839;

	enum class InputDeviceDriverType : ::System::UInt16
	{
		Unknown = 0,
		HID = 1,
		USB = 2,
		Bluetooth = 3,
		XInput = 4,
		DirectInput = 5,
		RawInput = 6,
		AppleGameController = 7,
		SDLJoystick = 8,
		SDLController = 9,
	};
}
