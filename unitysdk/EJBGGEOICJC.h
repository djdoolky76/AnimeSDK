#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define EJBGGEOICJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9D2150)
#define EJBGGEOICJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9D20C0)
#define EJBGGEOICJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9D2370)
#define EJBGGEOICJC__CTOR_OFFSET UNITYSDK_OFFSET(0xF9D22D0)

inline static constexpr unsigned int EJBGGEOICJC_TypeDefinitionIndex = 60937;

class EJBGGEOICJC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* HHGILNNMNAK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGGEOICJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGGEOICJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EJBGGEOICJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBGGEOICJC_GDEOPIBNOIN_OFFSET))(this);
	}
};
