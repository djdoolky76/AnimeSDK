#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_InitialMemento_TypeDefinitionIndex = 72688;

	struct alignas(4) ToggleButton_InitialMemento
	{
		::System::Boolean IsOn; // 0x10
		::System::Boolean Interactable; // 0x11
	};
}
