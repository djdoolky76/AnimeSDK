#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PIDBPNBEKKN.h"

namespace System { class String; }

#define PMDBHPCDLCJ_ECFLCNOLIOG_AJPHDBMGIBE_OFFSET UNITYSDK_OFFSET(0x178EA950)
#define PMDBHPCDLCJ_ECFLCNOLIOG__CTOR_OFFSET UNITYSDK_OFFSET(0x178EA940)

inline static constexpr unsigned int PMDBHPCDLCJ_ECFLCNOLIOG_TypeDefinitionIndex = 43893;

class PMDBHPCDLCJ_ECFLCNOLIOG : public ::System::Object
{
public:
	::System::String* LCEGOBBEECM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMDBHPCDLCJ_ECFLCNOLIOG__CTOR_OFFSET))(this);
	}

	::System::Void AJPHDBMGIBE(::PIDBPNBEKKN DHHKIDEDMEL)
	{
		return ((::System::Void(*)(::PVOID, ::PIDBPNBEKKN))((::PBYTE)hIl2Cpp + PMDBHPCDLCJ_ECFLCNOLIOG_AJPHDBMGIBE_OFFSET))(this, DHHKIDEDMEL);
	}
};
