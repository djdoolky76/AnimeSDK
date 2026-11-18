#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EFPKEAJFBGC_KDJOCHAEMMM_OAKMHICLPKI_OFFSET UNITYSDK_OFFSET(0x14A876D0)
#define EFPKEAJFBGC_KDJOCHAEMMM_PPLIIOIKJPA_OFFSET UNITYSDK_OFFSET(0x14A876E0)
#define EFPKEAJFBGC_KDJOCHAEMMM__CTOR_OFFSET UNITYSDK_OFFSET(0x14A876C0)

inline static constexpr unsigned int EFPKEAJFBGC_KDJOCHAEMMM_TypeDefinitionIndex = 92774;

class EFPKEAJFBGC_KDJOCHAEMMM : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_KDJOCHAEMMM__CTOR_OFFSET))(this);
	}

	::System::Void OAKMHICLPKI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_KDJOCHAEMMM_OAKMHICLPKI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PPLIIOIKJPA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_KDJOCHAEMMM_PPLIIOIKJPA_OFFSET))(this, BHDNBGLCNOM);
	}
};
