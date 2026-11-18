#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KDFPGBAMCLN;

#define KDFPGBAMCLN_EFPIGLHLEOP_GICMAPOIKPB_OFFSET UNITYSDK_OFFSET(0x15155250)
#define KDFPGBAMCLN_EFPIGLHLEOP__CTOR_OFFSET UNITYSDK_OFFSET(0x15155240)

inline static constexpr unsigned int KDFPGBAMCLN_EFPIGLHLEOP_TypeDefinitionIndex = 77319;

class KDFPGBAMCLN_EFPIGLHLEOP : public ::System::Object
{
public:
	::KDFPGBAMCLN* KLHPEBKNIFB; // 0x10
	::System::Int32 IHEAAOINMFF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPGBAMCLN_EFPIGLHLEOP__CTOR_OFFSET))(this);
	}

	::System::Void GICMAPOIKPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDFPGBAMCLN_EFPIGLHLEOP_GICMAPOIKPB_OFFSET))(this);
	}
};
