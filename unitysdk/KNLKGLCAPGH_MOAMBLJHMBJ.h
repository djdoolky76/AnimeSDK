#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_MOAMBLJHMBJ_CGEJOBBAFHG_OFFSET UNITYSDK_OFFSET(0x157FFE80)
#define KNLKGLCAPGH_MOAMBLJHMBJ_GDJEEDMIFEC_OFFSET UNITYSDK_OFFSET(0x157FFF80)
#define KNLKGLCAPGH_MOAMBLJHMBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x157FFE70)

inline static constexpr unsigned int KNLKGLCAPGH_MOAMBLJHMBJ_TypeDefinitionIndex = 41096;

class KNLKGLCAPGH_MOAMBLJHMBJ : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18
	::System::UInt32 MGMDLMBEDJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MOAMBLJHMBJ__CTOR_OFFSET))(this);
	}

	::System::Void CGEJOBBAFHG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MOAMBLJHMBJ_CGEJOBBAFHG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GDJEEDMIFEC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_MOAMBLJHMBJ_GDJEEDMIFEC_OFFSET))(this, BHDNBGLCNOM);
	}
};
