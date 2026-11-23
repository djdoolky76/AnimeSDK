#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCFAAF423DF43697.h"

#define ABA24750C24496A7_A33A0475A4C517E3_OFFSET UNITYSDK_OFFSET(0x2445540)
#define ABA24750C24496A7_FEFB0AE48957BF16_OFFSET UNITYSDK_OFFSET(0x24454F0)
#define ABA24750C24496A7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ABA24750C24496A7_TypeDefinitionIndex = 2514;

class ABA24750C24496A7 : public ::BCFAAF423DF43697
{
public:
	::System::Void FEFB0AE48957BF16()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABA24750C24496A7_FEFB0AE48957BF16_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABA24750C24496A7__CTOR_OFFSET))(this);
	}

	::System::Void A33A0475A4C517E3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABA24750C24496A7_A33A0475A4C517E3_OFFSET))(this);
	}
};
