#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KNLKGLCAPGH_KNFBLGPLBMP_BONPNNHAPJG_OFFSET UNITYSDK_OFFSET(0x16822B30)
#define KNLKGLCAPGH_KNFBLGPLBMP_FCIPOMJNKNE_OFFSET UNITYSDK_OFFSET(0x16822B20)
#define KNLKGLCAPGH_KNFBLGPLBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x16822B10)

inline static constexpr unsigned int KNLKGLCAPGH_KNFBLGPLBMP_TypeDefinitionIndex = 41118;

class KNLKGLCAPGH_KNFBLGPLBMP : public ::System::Object
{
public:
	::System::Action* OMPPPHOPAFB; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_KNFBLGPLBMP__CTOR_OFFSET))(this);
	}

	::System::Void FCIPOMJNKNE(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_KNFBLGPLBMP_FCIPOMJNKNE_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BONPNNHAPJG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLKGLCAPGH_KNFBLGPLBMP_BONPNNHAPJG_OFFSET))(this, BHDNBGLCNOM);
	}
};
