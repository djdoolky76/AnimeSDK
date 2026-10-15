#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	enum class UIAdaptiveDeviceType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		Phone = 2,
		PC = 3,
		Pad = 4,
		PhoneWithoutNotch = 5,
	};
}
