#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_AEPOPMOEMKB_KMGJPMPGKHF_OFFSET UNITYSDK_OFFSET(0x172E0610)
#define OOBAHEDLHOI_AEPOPMOEMKB_LLKCLDAODML_OFFSET UNITYSDK_OFFSET(0x172E0620)
#define OOBAHEDLHOI_AEPOPMOEMKB__CTOR_OFFSET UNITYSDK_OFFSET(0x172E0600)

inline static constexpr unsigned int OOBAHEDLHOI_AEPOPMOEMKB_TypeDefinitionIndex = 75516;

class OOBAHEDLHOI_AEPOPMOEMKB : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_AEPOPMOEMKB__CTOR_OFFSET))(this);
	}

	::System::Void KMGJPMPGKHF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_AEPOPMOEMKB_KMGJPMPGKHF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LLKCLDAODML(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_AEPOPMOEMKB_LLKCLDAODML_OFFSET))(this, BHDNBGLCNOM);
	}
};
