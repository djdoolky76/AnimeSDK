#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define LFNJHHDLFOM_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x184F1F70)
#define LFNJHHDLFOM_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x184F2030)
#define LFNJHHDLFOM__CTOR_OFFSET UNITYSDK_OFFSET(0x184F1FC0)

inline static constexpr unsigned int LFNJHHDLFOM_TypeDefinitionIndex = 77086;

class LFNJHHDLFOM : public ::PKMJPMFCNBK
{
public:
	::System::Int32 BMGONIADLKG; // 0x80
	::System::Int32 PDIOFDAKGBN; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNJHHDLFOM__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNJHHDLFOM_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFNJHHDLFOM_KHJELIBOECB_OFFSET))(this);
	}
};
