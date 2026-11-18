#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define CCKFCLLCKKB_BGJPLEHEDKJ_OFFSET UNITYSDK_OFFSET(0x145A9510)
#define CCKFCLLCKKB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x145A94A0)
#define CCKFCLLCKKB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x145A9410)
#define CCKFCLLCKKB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x145A9920)
#define CCKFCLLCKKB__CTOR_OFFSET UNITYSDK_OFFSET(0x145A9880)

inline static constexpr unsigned int CCKFCLLCKKB_TypeDefinitionIndex = 49330;

class CCKFCLLCKKB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKFCLLCKKB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKFCLLCKKB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CCKFCLLCKKB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKFCLLCKKB_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean BGJPLEHEDKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKFCLLCKKB_BGJPLEHEDKJ_OFFSET))(this);
	}
};
