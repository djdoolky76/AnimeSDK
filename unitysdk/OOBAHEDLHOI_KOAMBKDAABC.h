#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_KOAMBKDAABC_LEBBJCPEMMA_OFFSET UNITYSDK_OFFSET(0x1AFC3F20)
#define OOBAHEDLHOI_KOAMBKDAABC_PCMHPMIPMNM_OFFSET UNITYSDK_OFFSET(0x1AFC3F30)
#define OOBAHEDLHOI_KOAMBKDAABC__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC3F10)

inline static constexpr unsigned int OOBAHEDLHOI_KOAMBKDAABC_TypeDefinitionIndex = 75525;

class OOBAHEDLHOI_KOAMBKDAABC : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* OIPJFHJAKLA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_KOAMBKDAABC__CTOR_OFFSET))(this);
	}

	::System::Void LEBBJCPEMMA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_KOAMBKDAABC_LEBBJCPEMMA_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void PCMHPMIPMNM(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_KOAMBKDAABC_PCMHPMIPMNM_OFFSET))(this, BHDNBGLCNOM);
	}
};
