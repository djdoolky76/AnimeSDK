#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define DAJLOMCLJFP_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x193F5690)
#define DAJLOMCLJFP_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x193F5790)
#define DAJLOMCLJFP__CTOR_OFFSET UNITYSDK_OFFSET(0x193F5720)

inline static constexpr unsigned int DAJLOMCLJFP_TypeDefinitionIndex = 54415;

class DAJLOMCLJFP : public ::PKMJPMFCNBK
{
public:
	::System::Int32 KFAJBJFKHJL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJLOMCLJFP__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJLOMCLJFP_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAJLOMCLJFP_KHJELIBOECB_OFFSET))(this);
	}
};
