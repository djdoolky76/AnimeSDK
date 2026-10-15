#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class NPCIGEBNOFG;

#define OFNDGGCNFOM_CTOR_OFFSET UNITYSDK_OFFSET(0xBE490E0)
#define OFNDGGCNFOM_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0xBE490F0)

inline static constexpr unsigned int OFNDGGCNFOM_TypeDefinitionIndex = 67100;

	class OFNDGGCNFOM : public ::EBIMENNAEIE
	{
	public:
		::NPCIGEBNOFG* LEEMNOCGBOJ; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::NPCIGEBNOFG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::NPCIGEBNOFG*))((::PBYTE)hIl2Cpp + OFNDGGCNFOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFNDGGCNFOM_JAGMPHPNAHM_OFFSET))(this);
		}

	};
