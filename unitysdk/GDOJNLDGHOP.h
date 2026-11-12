#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMLPEFKGCAH.h"

#define GDOJNLDGHOP_BKHKBEJCGJK_OFFSET UNITYSDK_OFFSET(0x168F73C0)
#define GDOJNLDGHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x168F7700)
#define GDOJNLDGHOP_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x168F7430)

inline static constexpr unsigned int GDOJNLDGHOP_TypeDefinitionIndex = 54953;

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
