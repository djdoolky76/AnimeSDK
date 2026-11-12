#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MNBKKAFFKJC.h"

#define JMIFFLOMGKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF2AE70)
#define JMIFFLOMGKF_DPMJELFJBBE_OFFSET UNITYSDK_OFFSET(0x1FF2AE90)

inline static constexpr unsigned int JMIFFLOMGKF_TypeDefinitionIndex = 45297;

	class JMIFFLOMGKF
	{
	public:
		::System::Void _ctor(::MNBKKAFFKJC a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNBKKAFFKJC))((::PBYTE)hIl2Cpp + JMIFFLOMGKF_CTOR_OFFSET))(this, a1);
		}

		::System::Void DPMJELFJBBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMIFFLOMGKF_DPMJELFJBBE_OFFSET))(this);
		}

	};
