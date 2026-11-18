#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define EMPOJFPIAFM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AAEE00)
#define EMPOJFPIAFM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AAED70)
#define EMPOJFPIAFM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AAEEF0)
#define EMPOJFPIAFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14AAEE50)

inline static constexpr unsigned int EMPOJFPIAFM_TypeDefinitionIndex = 51374;

class EMPOJFPIAFM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* KGBDIICHFEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPOJFPIAFM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPOJFPIAFM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EMPOJFPIAFM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPOJFPIAFM_GDEOPIBNOIN_OFFSET))(this);
	}
};
