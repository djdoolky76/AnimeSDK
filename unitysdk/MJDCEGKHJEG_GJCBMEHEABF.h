#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_GJCBMEHEABF_BPKBMODJLHN_OFFSET UNITYSDK_OFFSET(0x14DEAD30)
#define MJDCEGKHJEG_GJCBMEHEABF_IKPGGMDOONM_OFFSET UNITYSDK_OFFSET(0x14DEAD40)
#define MJDCEGKHJEG_GJCBMEHEABF__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEAD20)

inline static constexpr unsigned int MJDCEGKHJEG_GJCBMEHEABF_TypeDefinitionIndex = 56451;

class MJDCEGKHJEG_GJCBMEHEABF : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_GJCBMEHEABF__CTOR_OFFSET))(this);
	}

	::System::Void BPKBMODJLHN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_GJCBMEHEABF_BPKBMODJLHN_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void IKPGGMDOONM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_GJCBMEHEABF_IKPGGMDOONM_OFFSET))(this, BHDNBGLCNOM);
	}
};
