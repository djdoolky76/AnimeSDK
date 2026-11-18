#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class CAPAFILOMGC;
class HAFLGNENJDI;

#define BJEEFAEEFLD_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1691E410)
#define BJEEFAEEFLD_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1691E510)
#define BJEEFAEEFLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1691E4A0)

inline static constexpr unsigned int BJEEFAEEFLD_TypeDefinitionIndex = 46145;

class BJEEFAEEFLD : public ::PKMJPMFCNBK
{
public:
	::CAPAFILOMGC* JPMBBNEMEDD; // 0x80
	::HAFLGNENJDI* OALCOHFBEAB; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEEFAEEFLD__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEEFAEEFLD_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEEFAEEFLD_KHJELIBOECB_OFFSET))(this);
	}
};
