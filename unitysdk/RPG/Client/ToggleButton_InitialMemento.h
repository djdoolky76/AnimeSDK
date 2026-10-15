#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	struct alignas(4) ToggleButton_InitialMemento
	{
		::System::Boolean IsOn; // 0x10
		::System::Boolean Interactable; // 0x11
	};
}
