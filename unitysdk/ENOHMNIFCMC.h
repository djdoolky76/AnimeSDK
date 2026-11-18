#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define ENOHMNIFCMC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F496E0)
#define ENOHMNIFCMC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F49600)
#define ENOHMNIFCMC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F49B20)
#define ENOHMNIFCMC__CTOR_OFFSET UNITYSDK_OFFSET(0x10F49A30)

inline static constexpr unsigned int ENOHMNIFCMC_TypeDefinitionIndex = 89279;

class ENOHMNIFCMC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FHDBMFHDIEI; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* ILEAADAJFFA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOHMNIFCMC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOHMNIFCMC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ENOHMNIFCMC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOHMNIFCMC_GDEOPIBNOIN_OFFSET))(this);
	}
};
