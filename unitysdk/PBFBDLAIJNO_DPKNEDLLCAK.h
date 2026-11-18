#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/System/Object.h"

class PBFBDLAIJNO;

#define PBFBDLAIJNO_DPKNEDLLCAK_HOKKFBPIGJA_OFFSET UNITYSDK_OFFSET(0x150AE0D0)
#define PBFBDLAIJNO_DPKNEDLLCAK__CTOR_OFFSET UNITYSDK_OFFSET(0x150AE0C0)

inline static constexpr unsigned int PBFBDLAIJNO_DPKNEDLLCAK_TypeDefinitionIndex = 57120;

class PBFBDLAIJNO_DPKNEDLLCAK : public ::System::Object
{
public:
	::PBFBDLAIJNO* KLHPEBKNIFB; // 0x10
	::AIOFAMODPOO JGGPPJNIAKN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DPKNEDLLCAK__CTOR_OFFSET))(this);
	}

	::System::Void HOKKFBPIGJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBFBDLAIJNO_DPKNEDLLCAK_HOKKFBPIGJA_OFFSET))(this);
	}
};
