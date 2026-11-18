#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LGCGFMAAEFE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A30C9E0)
#define LGCGFMAAEFE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A30C950)
#define LGCGFMAAEFE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A30CC40)
#define LGCGFMAAEFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A30CBA0)

inline static constexpr unsigned int LGCGFMAAEFE_TypeDefinitionIndex = 89572;

class LGCGFMAAEFE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HPBOABKNEJK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCGFMAAEFE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCGFMAAEFE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LGCGFMAAEFE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCGFMAAEFE_GDEOPIBNOIN_OFFSET))(this);
	}
};
