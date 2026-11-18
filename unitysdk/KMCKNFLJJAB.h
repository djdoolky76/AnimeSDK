#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGFHNCFCDFD.h"
#include "unitysdk/DGMALDHGMGK.h"

class OACGMNLPCOB;

#define KMCKNFLJJAB_DNMLALNHPKE_OFFSET UNITYSDK_OFFSET(0x15BA0ED0)
#define KMCKNFLJJAB_OGCLAIKLCKK_OFFSET UNITYSDK_OFFSET(0x15BA1040)
#define KMCKNFLJJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA0E90)

inline static constexpr unsigned int KMCKNFLJJAB_TypeDefinitionIndex = 59487;

class KMCKNFLJJAB : public ::NGFHNCFCDFD
{
public:
	::System::Void _ctor(::DGMALDHGMGK LJBPECKCCEA, ::OACGMNLPCOB* LHPFMGBDFPN)
	{
		return ((::System::Void(*)(::PVOID, ::DGMALDHGMGK, ::OACGMNLPCOB*))((::PBYTE)hIl2Cpp + KMCKNFLJJAB__CTOR_OFFSET))(this, LJBPECKCCEA, LHPFMGBDFPN);
	}

	::System::Boolean DNMLALNHPKE(::System::Boolean NALNLMPLMNH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMCKNFLJJAB_DNMLALNHPKE_OFFSET))(this, NALNLMPLMNH);
	}

	::System::Boolean OGCLAIKLCKK(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMCKNFLJJAB_OGCLAIKLCKK_OFFSET))(this, MIALFKCCCPI);
	}
};
