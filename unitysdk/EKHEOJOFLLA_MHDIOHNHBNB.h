#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class EKHEOJOFLLA;

#define EKHEOJOFLLA_MHDIOHNHBNB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6D5D40)
#define EKHEOJOFLLA_MHDIOHNHBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int EKHEOJOFLLA_MHDIOHNHBNB_TypeDefinitionIndex = 62646;

struct alignas(8) EKHEOJOFLLA_MHDIOHNHBNB
{
	::EKHEOJOFLLA* DAAAEJDBNFI; // 0x10

	::System::Void _ctor(::EKHEOJOFLLA* HBMGHPEPBNC)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_MHDIOHNHBNB__CTOR_OFFSET))(this, HBMGHPEPBNC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHEOJOFLLA_MHDIOHNHBNB_DISPOSE_OFFSET))(this);
	}
};
