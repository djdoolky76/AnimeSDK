#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_IMODEEOEFOJ_JIEHEHOJLPO_OFFSET UNITYSDK_OFFSET(0x151D7E60)
#define MJDCEGKHJEG_IMODEEOEFOJ_MIBMGLOKHOL_OFFSET UNITYSDK_OFFSET(0x151D7E50)
#define MJDCEGKHJEG_IMODEEOEFOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151D7E40)

inline static constexpr unsigned int MJDCEGKHJEG_IMODEEOEFOJ_TypeDefinitionIndex = 56408;

class MJDCEGKHJEG_IMODEEOEFOJ : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IMODEEOEFOJ__CTOR_OFFSET))(this);
	}

	::System::Void MIBMGLOKHOL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IMODEEOEFOJ_MIBMGLOKHOL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void JIEHEHOJLPO(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_IMODEEOEFOJ_JIEHEHOJLPO_OFFSET))(this, BHDNBGLCNOM);
	}
};
