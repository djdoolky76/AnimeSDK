#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EFPKEAJFBGC_JPCNEEMIJGD_BMDHCHIBIPK_OFFSET UNITYSDK_OFFSET(0x1722DAE0)
#define EFPKEAJFBGC_JPCNEEMIJGD_NKEIBDJJEAL_OFFSET UNITYSDK_OFFSET(0x1722DA80)
#define EFPKEAJFBGC_JPCNEEMIJGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1722DA70)

inline static constexpr unsigned int EFPKEAJFBGC_JPCNEEMIJGD_TypeDefinitionIndex = 92772;

class EFPKEAJFBGC_JPCNEEMIJGD : public ::System::Object
{
public:
	::System::Action* BLLNHDIDKPA; // 0x10
	::System::Action* CAAFEGLOALC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_JPCNEEMIJGD__CTOR_OFFSET))(this);
	}

	::System::Void NKEIBDJJEAL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_JPCNEEMIJGD_NKEIBDJJEAL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BMDHCHIBIPK(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EFPKEAJFBGC_JPCNEEMIJGD_BMDHCHIBIPK_OFFSET))(this, BHDNBGLCNOM);
	}
};
