#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KBIILGMAFIB_PPMJHMJKENO_ABHHLMHLOKD_OFFSET UNITYSDK_OFFSET(0x1A496B80)
#define KBIILGMAFIB_PPMJHMJKENO_OIJEIOEGKCA_OFFSET UNITYSDK_OFFSET(0x1A496B70)
#define KBIILGMAFIB_PPMJHMJKENO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A496990)

inline static constexpr unsigned int KBIILGMAFIB_PPMJHMJKENO_TypeDefinitionIndex = 61761;

class KBIILGMAFIB_PPMJHMJKENO : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10
	::System::Action* AFKOOINGNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBIILGMAFIB_PPMJHMJKENO__CTOR_OFFSET))(this);
	}

	::System::Void OIJEIOEGKCA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_PPMJHMJKENO_OIJEIOEGKCA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void ABHHLMHLOKD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KBIILGMAFIB_PPMJHMJKENO_ABHHLMHLOKD_OFFSET))(this, BHDNBGLCNOM);
	}
};
