#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_BCHKGCLPNIE_CNJKFOLCBKP_OFFSET UNITYSDK_OFFSET(0x15BA5B00)
#define KNLKGLCAPGH_BCHKGCLPNIE_ODLEGJGKAOM_OFFSET UNITYSDK_OFFSET(0x15BA5AF0)
#define KNLKGLCAPGH_BCHKGCLPNIE__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA5AE0)

inline static constexpr unsigned int KNLKGLCAPGH_BCHKGCLPNIE_TypeDefinitionIndex = 41097;

class KNLKGLCAPGH_BCHKGCLPNIE : public ::System::Object
{
public:
	::System::Action* CAAFEGLOALC; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BCHKGCLPNIE__CTOR_OFFSET))(this);
	}

	::System::Void ODLEGJGKAOM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BCHKGCLPNIE_ODLEGJGKAOM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CNJKFOLCBKP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_BCHKGCLPNIE_CNJKFOLCBKP_OFFSET))(this, BHDNBGLCNOM);
	}
};
