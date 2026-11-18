#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OOBAHEDLHOI_NCALFFOENBJ_KOEGECMICAG_OFFSET UNITYSDK_OFFSET(0x12955290)
#define OOBAHEDLHOI_NCALFFOENBJ_MJNOKGDAFIH_OFFSET UNITYSDK_OFFSET(0x129552A0)
#define OOBAHEDLHOI_NCALFFOENBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12955280)

inline static constexpr unsigned int OOBAHEDLHOI_NCALFFOENBJ_TypeDefinitionIndex = 75532;

class OOBAHEDLHOI_NCALFFOENBJ : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_NCALFFOENBJ__CTOR_OFFSET))(this);
	}

	::System::Void KOEGECMICAG(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_NCALFFOENBJ_KOEGECMICAG_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void MJNOKGDAFIH(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OOBAHEDLHOI_NCALFFOENBJ_MJNOKGDAFIH_OFFSET))(this, BHDNBGLCNOM);
	}
};
