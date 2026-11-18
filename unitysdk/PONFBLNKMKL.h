#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class ALMFNOLKPBN;
class CECOONHGFLL;

#define PONFBLNKMKL_KENLMJJKNPD_OFFSET UNITYSDK_OFFSET(0x818880)
#define PONFBLNKMKL__CTOR_OFFSET UNITYSDK_OFFSET(0x818810)

inline static constexpr unsigned int PONFBLNKMKL_TypeDefinitionIndex = 45348;

struct alignas(4) PONFBLNKMKL
{
	::System::Int32 AOCBLKKDFNH; // 0x10

	::System::Void _ctor(::System::Int32 AHFJCBLHFIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PONFBLNKMKL__CTOR_OFFSET))(this, AHFJCBLHFIJ);
	}

	::ALMFNOLKPBN* KENLMJJKNPD(::CECOONHGFLL* ICILGJFKNDB)
	{
		return ((::ALMFNOLKPBN*(*)(::PVOID, ::CECOONHGFLL*))((::PBYTE)hIl2Cpp + PONFBLNKMKL_KENLMJJKNPD_OFFSET))(this, ICILGJFKNDB);
	}
};
