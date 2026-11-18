#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_GDLDLDOPGKK_BAJFODJNAPC_OFFSET UNITYSDK_OFFSET(0x16F89AE0)
#define OOBAHEDLHOI_GDLDLDOPGKK_PKNAOMHCPFN_OFFSET UNITYSDK_OFFSET(0x16F89AF0)
#define OOBAHEDLHOI_GDLDLDOPGKK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89AD0)

inline static constexpr unsigned int OOBAHEDLHOI_GDLDLDOPGKK_TypeDefinitionIndex = 75527;

class OOBAHEDLHOI_GDLDLDOPGKK : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GDLDLDOPGKK__CTOR_OFFSET))(this);
	}

	::System::Void BAJFODJNAPC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GDLDLDOPGKK_BAJFODJNAPC_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PKNAOMHCPFN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GDLDLDOPGKK_PKNAOMHCPFN_OFFSET))(this, BHDNBGLCNOM);
	}
};
