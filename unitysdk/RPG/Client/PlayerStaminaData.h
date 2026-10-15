#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerStaminaData_TypeDefinitionIndex = 66678;

	struct alignas(4) PlayerStaminaData
	{
		::System::UInt32 Stamina; // 0x10
		::System::UInt32 ReserveStamina; // 0x14
		::System::Int64 NextRecoverTime; // 0x18
		::System::Int64 NextReserveTime; // 0x20
	};
}
