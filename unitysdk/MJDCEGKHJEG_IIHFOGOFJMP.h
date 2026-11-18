#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_IIHFOGOFJMP_BPKBMODJLHN_OFFSET UNITYSDK_OFFSET(0x13D464E0)
#define MJDCEGKHJEG_IIHFOGOFJMP_IKPGGMDOONM_OFFSET UNITYSDK_OFFSET(0x13D464D0)
#define MJDCEGKHJEG_IIHFOGOFJMP__CTOR_OFFSET UNITYSDK_OFFSET(0x13D460C0)

inline static constexpr unsigned int MJDCEGKHJEG_IIHFOGOFJMP_TypeDefinitionIndex = 56442;

class MJDCEGKHJEG_IIHFOGOFJMP : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IIHFOGOFJMP__CTOR_OFFSET))(this);
	}

	::System::Void IKPGGMDOONM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IIHFOGOFJMP_IKPGGMDOONM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BPKBMODJLHN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IIHFOGOFJMP_BPKBMODJLHN_OFFSET))(this, BHDNBGLCNOM);
	}
};
