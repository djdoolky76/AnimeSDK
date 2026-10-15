#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBIMENNAEIE.h"
#include "unitysdk/NHHMEPILLHL.h"
class LHKAOPAPJEK;
class OEPIHJOHLKM;

#define IGFFFHBLFCP_CTOR_OFFSET UNITYSDK_OFFSET(0x163FE380)
#define IGFFFHBLFCP_JAGMPHPNAHM_OFFSET UNITYSDK_OFFSET(0x163FE3A0)

inline static constexpr unsigned int IGFFFHBLFCP_TypeDefinitionIndex = 67120;

	class IGFFFHBLFCP : public ::EBIMENNAEIE
	{
	public:
		::LHKAOPAPJEK* FBKKBOFGGLF; // 0x20
		::System::Void _ctor(::NHHMEPILLHL a1, ::OEPIHJOHLKM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHHMEPILLHL, ::OEPIHJOHLKM*))((::PBYTE)hIl2Cpp + IGFFFHBLFCP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JAGMPHPNAHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGFFFHBLFCP_JAGMPHPNAHM_OFFSET))(this);
		}

	};
