#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::UI::FlowerShop
{
	inline static constexpr unsigned int ESlotType_TypeDefinitionIndex = 45619;

	enum class ESlotType : ::System::Int32
	{
		Base = 0,
		InValid = -1,
		Slot2 = 2,
		Slot3 = 3,
		Slot1 = 1,
	};
}
