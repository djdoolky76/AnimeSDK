#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_JKNFFNHFIEF_FCKHADFCDPI_OFFSET UNITYSDK_OFFSET(0x15FF3EA0)
#define OOBAHEDLHOI_JKNFFNHFIEF_HIDMDJODAAB_OFFSET UNITYSDK_OFFSET(0x15FF3EB0)
#define OOBAHEDLHOI_JKNFFNHFIEF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF3E90)

inline static constexpr unsigned int OOBAHEDLHOI_JKNFFNHFIEF_TypeDefinitionIndex = 75519;

class OOBAHEDLHOI_JKNFFNHFIEF : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JKNFFNHFIEF__CTOR_OFFSET))(this);
	}

	::System::Void FCKHADFCDPI(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JKNFFNHFIEF_FCKHADFCDPI_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HIDMDJODAAB(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_JKNFFNHFIEF_HIDMDJODAAB_OFFSET))(this, BHDNBGLCNOM);
	}
};
