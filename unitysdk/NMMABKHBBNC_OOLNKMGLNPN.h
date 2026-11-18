#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLNGLIBJBID;
class EHDGBEIJAAE;
class NMMABKHBBNC;

#define NMMABKHBBNC_OOLNKMGLNPN_OPHMGNNPBCB_OFFSET UNITYSDK_OFFSET(0x1067AED0)
#define NMMABKHBBNC_OOLNKMGLNPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1067AEC0)

inline static constexpr unsigned int NMMABKHBBNC_OOLNKMGLNPN_TypeDefinitionIndex = 45474;

class NMMABKHBBNC_OOLNKMGLNPN : public ::System::Object
{
public:
	::EHDGBEIJAAE* CFHOFEKBGLO; // 0x10
	::NMMABKHBBNC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMABKHBBNC_OOLNKMGLNPN__CTOR_OFFSET))(this);
	}

	::System::Void OPHMGNNPBCB(::BLNGLIBJBID* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::BLNGLIBJBID*))((::PBYTE)hIl2Cpp + NMMABKHBBNC_OOLNKMGLNPN_OPHMGNNPBCB_OFFSET))(this, DJCNCELJPOM);
	}
};
