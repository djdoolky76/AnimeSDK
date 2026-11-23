#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DECIMAL_B1EDC836F1CB9D3A_A4D4AF2CAA2CB4FE__CTOR_OFFSET UNITYSDK_OFFSET(0x3B71BD0)

namespace System
{
	inline static constexpr unsigned int Decimal_B1EDC836F1CB9D3A_A4D4AF2CAA2CB4FE_TypeDefinitionIndex = 10346;

	struct alignas(4) Decimal_B1EDC836F1CB9D3A_A4D4AF2CAA2CB4FE
	{
		::System::UInt32 BDEFF01D46486401; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 B405BD91EB2BDD04; // 0x18

		::System::Void _ctor(::System::UInt32 E0D9F4DCCAF46AB0, ::System::UInt32 EE4C34BEA2B1D103, ::System::UInt32 BE6CCF3EEF16B408)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_DECIMAL_B1EDC836F1CB9D3A_A4D4AF2CAA2CB4FE__CTOR_OFFSET))(this, E0D9F4DCCAF46AB0, EE4C34BEA2B1D103, BE6CCF3EEF16B408);
		}
	};
}
