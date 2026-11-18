#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_DGDGKMJDPBO_GJNFJMLOPDN_OFFSET UNITYSDK_OFFSET(0x1A7F8E80)
#define PLCNOAKLOIH_DGDGKMJDPBO_IDGPFIBPAOM_OFFSET UNITYSDK_OFFSET(0x1A7F8E70)
#define PLCNOAKLOIH_DGDGKMJDPBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7F8E60)

inline static constexpr unsigned int PLCNOAKLOIH_DGDGKMJDPBO_TypeDefinitionIndex = 89225;

class PLCNOAKLOIH_DGDGKMJDPBO : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DGDGKMJDPBO__CTOR_OFFSET))(this);
	}

	::System::Void IDGPFIBPAOM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DGDGKMJDPBO_IDGPFIBPAOM_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void GJNFJMLOPDN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_DGDGKMJDPBO_GJNFJMLOPDN_OFFSET))(this, BHDNBGLCNOM);
	}
};
