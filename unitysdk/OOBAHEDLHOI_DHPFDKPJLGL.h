#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_DHPFDKPJLGL_BIGPDMCIAOK_OFFSET UNITYSDK_OFFSET(0x16C42300)
#define OOBAHEDLHOI_DHPFDKPJLGL_BPBAOFDBACI_OFFSET UNITYSDK_OFFSET(0x16C42310)
#define OOBAHEDLHOI_DHPFDKPJLGL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C35D00)

inline static constexpr unsigned int OOBAHEDLHOI_DHPFDKPJLGL_TypeDefinitionIndex = 75531;

class OOBAHEDLHOI_DHPFDKPJLGL : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DHPFDKPJLGL__CTOR_OFFSET))(this);
	}

	::System::Void BIGPDMCIAOK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DHPFDKPJLGL_BIGPDMCIAOK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BPBAOFDBACI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_DHPFDKPJLGL_BPBAOFDBACI_OFFSET))(this, BHDNBGLCNOM);
	}
};
