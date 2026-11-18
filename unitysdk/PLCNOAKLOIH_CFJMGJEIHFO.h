#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_CFJMGJEIHFO_AHGAOPPPMOC_OFFSET UNITYSDK_OFFSET(0x194B2B40)
#define PLCNOAKLOIH_CFJMGJEIHFO_EHGKNOAOJGJ_OFFSET UNITYSDK_OFFSET(0x194B2B50)
#define PLCNOAKLOIH_CFJMGJEIHFO__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2B30)

inline static constexpr unsigned int PLCNOAKLOIH_CFJMGJEIHFO_TypeDefinitionIndex = 89234;

class PLCNOAKLOIH_CFJMGJEIHFO : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_CFJMGJEIHFO__CTOR_OFFSET))(this);
	}

	::System::Void AHGAOPPPMOC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_CFJMGJEIHFO_AHGAOPPPMOC_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EHGKNOAOJGJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_CFJMGJEIHFO_EHGKNOAOJGJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
