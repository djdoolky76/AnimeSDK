#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFDAGLKHOED_KNLGEKLHPJF;

#define LFDAGLKHOED_BDABFFHPKPL_EKEDJAOIMKC_OFFSET UNITYSDK_OFFSET(0x19989E30)
#define LFDAGLKHOED_BDABFFHPKPL_HBJKINIKFHO_OFFSET UNITYSDK_OFFSET(0x19989E90)
#define LFDAGLKHOED_BDABFFHPKPL_KCKJAPOFDAP_OFFSET UNITYSDK_OFFSET(0x19989E70)
#define LFDAGLKHOED_BDABFFHPKPL_NEPMBMAMCKA_OFFSET UNITYSDK_OFFSET(0x19989E80)
#define LFDAGLKHOED_BDABFFHPKPL__CTOR_OFFSET UNITYSDK_OFFSET(0x19989E20)

inline static constexpr unsigned int LFDAGLKHOED_BDABFFHPKPL_TypeDefinitionIndex = 53719;

class LFDAGLKHOED_BDABFFHPKPL : public ::System::Object
{
public:
	::LFDAGLKHOED_KNLGEKLHPJF* FGBNBFHOKAA; // 0x10
	::System::Boolean NIPCLLGIPME; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single IMLLDOHDCNC; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_BDABFFHPKPL__CTOR_OFFSET))(this);
	}

	::System::Void EKEDJAOIMKC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_BDABFFHPKPL_EKEDJAOIMKC_OFFSET))(this);
	}

	::System::Boolean KCKJAPOFDAP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_BDABFFHPKPL_KCKJAPOFDAP_OFFSET))(this);
	}

	::System::Single NEPMBMAMCKA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFDAGLKHOED_BDABFFHPKPL_NEPMBMAMCKA_OFFSET))(this);
	}

	::System::Void HBJKINIKFHO(::System::Single FOOBONOEPGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFDAGLKHOED_BDABFFHPKPL_HBJKINIKFHO_OFFSET))(this, FOOBONOEPGD);
	}
};
