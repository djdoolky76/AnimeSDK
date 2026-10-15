#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class BindingSettingsType : ::System::Int32
	{
		Disable = 0,
		KeyboardOnly = 1,
		GamepadOnly = 2,
		AllEnable = 3,
	};
}
