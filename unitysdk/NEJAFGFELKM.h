#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NEJAFGFELKM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18FB2FD0)
#define NEJAFGFELKM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18FB2F00)
#define NEJAFGFELKM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18FB31B0)
#define NEJAFGFELKM__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB30C0)

inline static constexpr unsigned int NEJAFGFELKM_TypeDefinitionIndex = 48369;

class NEJAFGFELKM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* MPHACCOJIBA; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* DAEENJIGFBI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJAFGFELKM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJAFGFELKM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NEJAFGFELKM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJAFGFELKM_GDEOPIBNOIN_OFFSET))(this);
	}
};
