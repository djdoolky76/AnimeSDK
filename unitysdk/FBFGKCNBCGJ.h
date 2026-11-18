#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

#define FBFGKCNBCGJ_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x140DD7E0)
#define FBFGKCNBCGJ_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x140DD8E0)
#define FBFGKCNBCGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x140DD870)

inline static constexpr unsigned int FBFGKCNBCGJ_TypeDefinitionIndex = 76297;

class FBFGKCNBCGJ : public ::PKMJPMFCNBK
{
public:
	::System::Boolean PCOKCENBMFE; // 0x80
	::System::Boolean KIPKKPHHIFE; // 0x81

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKCNBCGJ__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKCNBCGJ_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBFGKCNBCGJ_KHJELIBOECB_OFFSET))(this);
	}
};
