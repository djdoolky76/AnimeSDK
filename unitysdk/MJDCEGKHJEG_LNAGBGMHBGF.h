#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define MJDCEGKHJEG_LNAGBGMHBGF_DAEHCPKPJLJ_OFFSET UNITYSDK_OFFSET(0x1216B270)
#define MJDCEGKHJEG_LNAGBGMHBGF_DLFLPKBOPEF_OFFSET UNITYSDK_OFFSET(0x1216B280)
#define MJDCEGKHJEG_LNAGBGMHBGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1216B260)

inline static constexpr unsigned int MJDCEGKHJEG_LNAGBGMHBGF_TypeDefinitionIndex = 56419;

class MJDCEGKHJEG_LNAGBGMHBGF : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_LNAGBGMHBGF__CTOR_OFFSET))(this);
	}

	::System::Void DAEHCPKPJLJ(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_LNAGBGMHBGF_DAEHCPKPJLJ_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void DLFLPKBOPEF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + MJDCEGKHJEG_LNAGBGMHBGF_DLFLPKBOPEF_OFFSET))(this, BHDNBGLCNOM);
	}
};
