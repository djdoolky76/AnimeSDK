#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLPEFKGCAH.h"

#define GDOJNLDGHOP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x159BE500)
#define GDOJNLDGHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x159BE840)
#define GDOJNLDGHOP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x159BE570)

inline static constexpr unsigned int GDOJNLDGHOP_TypeDefinitionIndex = 53789;

	class GDOJNLDGHOP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOJNLDGHOP_CTOR_OFFSET))(this);
		}

		::System::Void BKHKBEJCGJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDOJNLDGHOP_BKHKBEJCGJK_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::JMLPEFKGCAH a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMLPEFKGCAH))((::PBYTE)hIl2Cpp + GDOJNLDGHOP_HKKFFCBJOKM_OFFSET))(this, a1);
		}

	};
