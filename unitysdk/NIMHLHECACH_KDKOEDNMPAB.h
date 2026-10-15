#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIMHLHECACH_IdleLiveBGMArea.h"

#define NIMHLHECACH_KDKOEDNMPAB_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define NIMHLHECACH_KDKOEDNMPAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x21650)

inline static constexpr unsigned int NIMHLHECACH_KDKOEDNMPAB_TypeDefinitionIndex = 75269;

	struct alignas(4) NIMHLHECACH_KDKOEDNMPAB
	{
		::NIMHLHECACH_IdleLiveBGMArea MIAJNJNECOG; // 0x10
		::NIMHLHECACH_IdleLiveBGMArea MCLLALGABAB; // 0x14
		::System::Void _ctor(::NIMHLHECACH_IdleLiveBGMArea a1, ::NIMHLHECACH_IdleLiveBGMArea a2)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH_IdleLiveBGMArea, ::NIMHLHECACH_IdleLiveBGMArea))((::PBYTE)hIl2Cpp + NIMHLHECACH_KDKOEDNMPAB_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean Equals(::NIMHLHECACH_KDKOEDNMPAB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIMHLHECACH_KDKOEDNMPAB))((::PBYTE)hIl2Cpp + NIMHLHECACH_KDKOEDNMPAB_EQUALS_OFFSET))(this, a1);
		}
		*/

	};
