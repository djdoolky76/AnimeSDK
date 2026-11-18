#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIFEKLIPAJD;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define GENHOCEIFEE_JPBCGEDDCFE_FLNOFGKJMPK_OFFSET UNITYSDK_OFFSET(0x13253420)
#define GENHOCEIFEE_JPBCGEDDCFE_JHCAOCILOBD_OFFSET UNITYSDK_OFFSET(0x13253480)
#define GENHOCEIFEE_JPBCGEDDCFE__CTOR_OFFSET UNITYSDK_OFFSET(0x13253410)

inline static constexpr unsigned int GENHOCEIFEE_JPBCGEDDCFE_TypeDefinitionIndex = 52649;

class GENHOCEIFEE_JPBCGEDDCFE : public ::System::Object
{
public:
	::System::Action_1<::GIFEKLIPAJD*>* FMEPFAMEKBL; // 0x10
	::System::Action_1<::OAEFGCLEHHO*>* COGMFCJKNJC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENHOCEIFEE_JPBCGEDDCFE__CTOR_OFFSET))(this);
	}

	::System::Void FLNOFGKJMPK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_JPBCGEDDCFE_FLNOFGKJMPK_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void JHCAOCILOBD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GENHOCEIFEE_JPBCGEDDCFE_JHCAOCILOBD_OFFSET))(this, BHDNBGLCNOM);
	}
};
