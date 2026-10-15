#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class NPCIGEBNOFG;

#define PFAFNGCEOAA_CTOR_OFFSET UNITYSDK_OFFSET(0xC200EE0)
#define PFAFNGCEOAA_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xC200EF0)

inline static constexpr unsigned int PFAFNGCEOAA_TypeDefinitionIndex = 67116;

	class PFAFNGCEOAA : public ::EBIMENNAEIE
	{
	public:
		::NPCIGEBNOFG* LEEMNOCGBOJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::NPCIGEBNOFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + PFAFNGCEOAA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFAFNGCEOAA_JAGMPHPNAHM_OFFSET))(this);
		}

	};
