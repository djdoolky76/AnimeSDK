#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

#define OGJEPIBCDKB_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0xFB8A1B0)
#define OGJEPIBCDKB_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0xFB8A1C0)
#define OGJEPIBCDKB__CTOR_OFFSET UNITYSDK_OFFSET(0xFB8A460)

inline static constexpr unsigned int OGJEPIBCDKB_TypeDefinitionIndex = 64942;

class OGJEPIBCDKB : public ::KBEPKELNDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJEPIBCDKB__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJEPIBCDKB_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGJEPIBCDKB_KMMIPNMJILI_OFFSET))(this);
	}
};
