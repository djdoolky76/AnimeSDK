#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class HHCFLCEDGMK;

#define HHCFLCEDGMK_OCMMKLMKHNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x742AF0)
#define HHCFLCEDGMK_OCMMKLMKHNE__CTOR_OFFSET UNITYSDK_OFFSET(0x742AD0)

inline static constexpr unsigned int HHCFLCEDGMK_OCMMKLMKHNE_TypeDefinitionIndex = 79362;

struct alignas(8) HHCFLCEDGMK_OCMMKLMKHNE
{
	::HHCFLCEDGMK* IAOKIHIJOCB; // 0x10

	::System::Void _ctor(::HHCFLCEDGMK* CFLAJMMODKB)
	{
		return ((::System::Void(*)(::PVOID, ::HHCFLCEDGMK*))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_OCMMKLMKHNE__CTOR_OFFSET))(this, CFLAJMMODKB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHCFLCEDGMK_OCMMKLMKHNE_DISPOSE_OFFSET))(this);
	}
};
