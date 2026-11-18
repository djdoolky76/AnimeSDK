#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDNNFHEGDH.h"
#include "unitysdk/BAKEACDMAIB.h"
#include "unitysdk/LJAPOEINABO.h"
#include "unitysdk/BHBGDGKDAFK.h"

class CCGKHPKLKKJ;

#define COLOMAEEIIH_AHEMAGNBHOG_OFFSET UNITYSDK_OFFSET(0x1A1C4A10)
#define COLOMAEEIIH_KPPMGELOEBL_OFFSET UNITYSDK_OFFSET(0x1A1C4A70)
#define COLOMAEEIIH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C4A20)

inline static constexpr unsigned int COLOMAEEIIH_TypeDefinitionIndex = 90916;

class COLOMAEEIIH : public ::LJAPOEINABO
{
public:
	::ANDNNFHEGDH MBKMBGHFMLN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLOMAEEIIH__CTOR_OFFSET))(this);
	}

	::BAKEACDMAIB AHEMAGNBHOG()
	{
		return ((::BAKEACDMAIB(*)(::PVOID))((::PBYTE)hIl2Cpp + COLOMAEEIIH_AHEMAGNBHOG_OFFSET))(this);
	}

	::System::Void KPPMGELOEBL(::CCGKHPKLKKJ* AAOCANGHBDG, ::BHBGDGKDAFK& KLILNJLHJMO)
	{
		return ((::System::Void(*)(::PVOID, ::CCGKHPKLKKJ*, ::BHBGDGKDAFK&))((::PBYTE)hIl2Cpp + COLOMAEEIIH_KPPMGELOEBL_OFFSET))(this, AAOCANGHBDG, KLILNJLHJMO);
	}
};
