#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_GMCLBALDBHJ_AHGAOPPPMOC_OFFSET UNITYSDK_OFFSET(0x194B2BA0)
#define PLCNOAKLOIH_GMCLBALDBHJ_EHGKNOAOJGJ_OFFSET UNITYSDK_OFFSET(0x194B2BB0)
#define PLCNOAKLOIH_GMCLBALDBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x194B2B90)

inline static constexpr unsigned int PLCNOAKLOIH_GMCLBALDBHJ_TypeDefinitionIndex = 89226;

class PLCNOAKLOIH_GMCLBALDBHJ : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_GMCLBALDBHJ__CTOR_OFFSET))(this);
	}

	::System::Void AHGAOPPPMOC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_GMCLBALDBHJ_AHGAOPPPMOC_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void EHGKNOAOJGJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_GMCLBALDBHJ_EHGKNOAOJGJ_OFFSET))(this, BHDNBGLCNOM);
	}
};
