#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class DIAEPBNFKBO;

#define OOIOENIIMKF_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x12956E50)
#define OOIOENIIMKF_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x12956F50)
#define OOIOENIIMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x12956EE0)

inline static constexpr unsigned int OOIOENIIMKF_TypeDefinitionIndex = 74166;

class OOIOENIIMKF : public ::PKMJPMFCNBK
{
public:
	::DIAEPBNFKBO* DLFOBFANLOF; // 0x80
	::System::Int32 GMOKFMOOGCB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOENIIMKF__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOENIIMKF_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIOENIIMKF_KHJELIBOECB_OFFSET))(this);
	}
};
