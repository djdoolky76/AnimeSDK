#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class NPCIGEBNOFG;

#define OIJJDLHPMCJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBE9D9C0)
#define OIJJDLHPMCJ_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xBE9D9D0)

inline static constexpr unsigned int OIJJDLHPMCJ_TypeDefinitionIndex = 67105;

	class OIJJDLHPMCJ : public ::EBIMENNAEIE
	{
	public:
		::NPCIGEBNOFG* LEEMNOCGBOJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::NPCIGEBNOFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + OIJJDLHPMCJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIJJDLHPMCJ_JAGMPHPNAHM_OFFSET))(this);
		}

	};
