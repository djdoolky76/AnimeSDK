#pragma once
#include "unitysdk/unitysdk.h"

namespace InControl
{
	inline static constexpr unsigned int InputDeviceTransportType_TypeDefinitionIndex = 40848;

	enum class InputDeviceTransportType : ::System::UInt16
	{
		Unknown = 0,
		USB = 1,
		Bluetooth = 2,
	};
}
