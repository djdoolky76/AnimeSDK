#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PKMJPMFCNBK.h"

class KHDCBNKLGOH;

#define FEEIJHIKNGH_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1713BBE0)
#define FEEIJHIKNGH_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1713BCF0)
#define FEEIJHIKNGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1713BC80)

inline static constexpr unsigned int FEEIJHIKNGH_TypeDefinitionIndex = 47663;

class FEEIJHIKNGH : public ::PKMJPMFCNBK
{
public:
	::KHDCBNKLGOH* ELMLEJDJGAI; // 0x80
	::System::Boolean EMHFLOILKLC; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEIJHIKNGH__CTOR_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEIJHIKNGH_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEIJHIKNGH_KHJELIBOECB_OFFSET))(this);
	}
};
