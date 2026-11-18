#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_GEOHBPFDKHG_CNMHCPNNEIK_OFFSET UNITYSDK_OFFSET(0x184591F0)
#define OOBAHEDLHOI_GEOHBPFDKHG_IJCHFHFIGAP_OFFSET UNITYSDK_OFFSET(0x184591E0)
#define OOBAHEDLHOI_GEOHBPFDKHG__CTOR_OFFSET UNITYSDK_OFFSET(0x184591D0)

inline static constexpr unsigned int OOBAHEDLHOI_GEOHBPFDKHG_TypeDefinitionIndex = 75540;

class OOBAHEDLHOI_GEOHBPFDKHG : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GEOHBPFDKHG__CTOR_OFFSET))(this);
	}

	::System::Void IJCHFHFIGAP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GEOHBPFDKHG_IJCHFHFIGAP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CNMHCPNNEIK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_GEOHBPFDKHG_CNMHCPNNEIK_OFFSET))(this, BHDNBGLCNOM);
	}
};
