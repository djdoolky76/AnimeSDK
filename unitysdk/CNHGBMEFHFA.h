#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class NPCIGEBNOFG;

#define CNHGBMEFHFA_CTOR_OFFSET UNITYSDK_OFFSET(0xE5EACD0)
#define CNHGBMEFHFA_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xE5EACE0)

inline static constexpr unsigned int CNHGBMEFHFA_TypeDefinitionIndex = 69061;

	class CNHGBMEFHFA : public ::EBIMENNAEIE
	{
	public:
		::NPCIGEBNOFG* LEEMNOCGBOJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::NPCIGEBNOFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + CNHGBMEFHFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNHGBMEFHFA_JAGMPHPNAHM_OFFSET))(this);
		}

	};
