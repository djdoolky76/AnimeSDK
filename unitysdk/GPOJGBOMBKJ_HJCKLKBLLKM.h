#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define GPOJGBOMBKJ_HJCKLKBLLKM_LOMNHMIJDGC_OFFSET UNITYSDK_OFFSET(0x17A308C0)
#define GPOJGBOMBKJ_HJCKLKBLLKM_MNKIMPAGJBD_OFFSET UNITYSDK_OFFSET(0x17A308B0)
#define GPOJGBOMBKJ_HJCKLKBLLKM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A308A0)

inline static constexpr unsigned int GPOJGBOMBKJ_HJCKLKBLLKM_TypeDefinitionIndex = 46922;

class GPOJGBOMBKJ_HJCKLKBLLKM : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_HJCKLKBLLKM__CTOR_OFFSET))(this);
	}

	::System::Void MNKIMPAGJBD(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_HJCKLKBLLKM_MNKIMPAGJBD_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void LOMNHMIJDGC(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_HJCKLKBLLKM_LOMNHMIJDGC_OFFSET))(this, BHDNBGLCNOM);
	}
};
