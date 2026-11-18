#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KBIILGMAFIB_IADCAJJHLAC_CJPOIIPCMCO_OFFSET UNITYSDK_OFFSET(0x130A8630)
#define KBIILGMAFIB_IADCAJJHLAC_KLCNNOJGLBI_OFFSET UNITYSDK_OFFSET(0x130A8620)
#define KBIILGMAFIB_IADCAJJHLAC__CTOR_OFFSET UNITYSDK_OFFSET(0x130A8610)

inline static constexpr unsigned int KBIILGMAFIB_IADCAJJHLAC_TypeDefinitionIndex = 61762;

class KBIILGMAFIB_IADCAJJHLAC : public ::System::Object
{
public:
	::System::Action* AFKOOINGNAK; // 0x10
	::System::Action* IHLBALNBGKM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIILGMAFIB_IADCAJJHLAC__CTOR_OFFSET))(this);
	}

	::System::Void KLCNNOJGLBI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_IADCAJJHLAC_KLCNNOJGLBI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CJPOIIPCMCO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_IADCAJJHLAC_CJPOIIPCMCO_OFFSET))(this, BHDNBGLCNOM);
	}
};
