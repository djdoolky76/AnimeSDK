#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKFNBHDICNJ;
namespace System { class Action; }

#define MKFNBHDICNJ_IPDIKGGEPKM_ILIEBEHALLA_OFFSET UNITYSDK_OFFSET(0x151E73E0)
#define MKFNBHDICNJ_IPDIKGGEPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x151E73D0)

inline static constexpr unsigned int MKFNBHDICNJ_IPDIKGGEPKM_TypeDefinitionIndex = 61368;

class MKFNBHDICNJ_IPDIKGGEPKM : public ::System::Object
{
public:
	::MKFNBHDICNJ* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Boolean FHDKDOBNMEN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_IPDIKGGEPKM__CTOR_OFFSET))(this);
	}

	::System::Void ILIEBEHALLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFNBHDICNJ_IPDIKGGEPKM_ILIEBEHALLA_OFFSET))(this);
	}
};
