#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBEPKELNDPC.h"
#include "unitysdk/KHOODDJHJIL.h"

#define GJDKDLBOFMI_ABNCDAHLPHH_OFFSET UNITYSDK_OFFSET(0x13D5C890)
#define GJDKDLBOFMI_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x13D5C8A0)
#define GJDKDLBOFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x13D5CE20)

inline static constexpr unsigned int GJDKDLBOFMI_TypeDefinitionIndex = 72514;

class GJDKDLBOFMI : public ::KBEPKELNDPC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDKDLBOFMI__CTOR_OFFSET))(this);
	}

	::KHOODDJHJIL ABNCDAHLPHH()
	{
		return ((::KHOODDJHJIL(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDKDLBOFMI_ABNCDAHLPHH_OFFSET))(this);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJDKDLBOFMI_KMMIPNMJILI_OFFSET))(this);
	}
};
