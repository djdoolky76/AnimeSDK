#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ICBEIDNFKOJ;
class LPFCLPNPBLJ;

#define ICBEIDNFKOJ_ELKALLONMAC_MCOJMOMJBEL_OFFSET UNITYSDK_OFFSET(0x1E3B2670)
#define ICBEIDNFKOJ_ELKALLONMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B2660)

inline static constexpr unsigned int ICBEIDNFKOJ_ELKALLONMAC_TypeDefinitionIndex = 94740;

class ICBEIDNFKOJ_ELKALLONMAC : public ::System::Object
{
public:
	::ICBEIDNFKOJ* KLHPEBKNIFB; // 0x10
	::System::Single PMNLNNGEIFM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEIDNFKOJ_ELKALLONMAC__CTOR_OFFSET))(this);
	}

	::System::Void MCOJMOMJBEL(::LPFCLPNPBLJ* PKKMOBMCODB)
	{
		return ((::System::Void(*)(::PVOID, ::LPFCLPNPBLJ*))((::PBYTE)hIl2Cpp + ICBEIDNFKOJ_ELKALLONMAC_MCOJMOMJBEL_OFFSET))(this, PKKMOBMCODB);
	}
};
