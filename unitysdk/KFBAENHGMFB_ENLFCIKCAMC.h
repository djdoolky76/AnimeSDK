#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_ENLFCIKCAMC_OGNPHECCEAP_OFFSET UNITYSDK_OFFSET(0x1633A420)
#define KFBAENHGMFB_ENLFCIKCAMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1633A410)

inline static constexpr unsigned int KFBAENHGMFB_ENLFCIKCAMC_TypeDefinitionIndex = 78581;

class KFBAENHGMFB_ENLFCIKCAMC : public ::System::Object
{
public:
	::System::Action* OIPJFHJAKLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ENLFCIKCAMC__CTOR_OFFSET))(this);
	}

	::System::Void OGNPHECCEAP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_ENLFCIKCAMC_OGNPHECCEAP_OFFSET))(this, BHDNBGLCNOM);
	}
};
