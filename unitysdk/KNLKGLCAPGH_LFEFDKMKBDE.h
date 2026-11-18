#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_LFEFDKMKBDE_DNDKDPOPADN_OFFSET UNITYSDK_OFFSET(0x129AAE00)
#define KNLKGLCAPGH_LFEFDKMKBDE_HIPCCAHJMGF_OFFSET UNITYSDK_OFFSET(0x129AADF0)
#define KNLKGLCAPGH_LFEFDKMKBDE__CTOR_OFFSET UNITYSDK_OFFSET(0x129AADE0)

inline static constexpr unsigned int KNLKGLCAPGH_LFEFDKMKBDE_TypeDefinitionIndex = 41112;

class KNLKGLCAPGH_LFEFDKMKBDE : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_LFEFDKMKBDE__CTOR_OFFSET))(this);
	}

	::System::Void HIPCCAHJMGF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_LFEFDKMKBDE_HIPCCAHJMGF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DNDKDPOPADN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_LFEFDKMKBDE_DNDKDPOPADN_OFFSET))(this, BHDNBGLCNOM);
	}
};
