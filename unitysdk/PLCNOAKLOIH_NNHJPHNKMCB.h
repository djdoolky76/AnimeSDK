#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define PLCNOAKLOIH_NNHJPHNKMCB_DGJAHNBKHAL_OFFSET UNITYSDK_OFFSET(0x1C2BBEE0)
#define PLCNOAKLOIH_NNHJPHNKMCB_LAOJONMJMME_OFFSET UNITYSDK_OFFSET(0x1C2BBED0)
#define PLCNOAKLOIH_NNHJPHNKMCB__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2BBEC0)

inline static constexpr unsigned int PLCNOAKLOIH_NNHJPHNKMCB_TypeDefinitionIndex = 89231;

class PLCNOAKLOIH_NNHJPHNKMCB : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_NNHJPHNKMCB__CTOR_OFFSET))(this);
	}

	::System::Void LAOJONMJMME(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_NNHJPHNKMCB_LAOJONMJMME_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DGJAHNBKHAL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + PLCNOAKLOIH_NNHJPHNKMCB_DGJAHNBKHAL_OFFSET))(this, BHDNBGLCNOM);
	}
};
