#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_HNNMLLOGCBJ_DCCIBDENEFN_OFFSET UNITYSDK_OFFSET(0x14FD5840)
#define KFBAENHGMFB_HNNMLLOGCBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD5830)

inline static constexpr unsigned int KFBAENHGMFB_HNNMLLOGCBJ_TypeDefinitionIndex = 78574;

class KFBAENHGMFB_HNNMLLOGCBJ : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_HNNMLLOGCBJ__CTOR_OFFSET))(this);
	}

	::System::Void DCCIBDENEFN(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_HNNMLLOGCBJ_DCCIBDENEFN_OFFSET))(this, BHDNBGLCNOM);
	}
};
