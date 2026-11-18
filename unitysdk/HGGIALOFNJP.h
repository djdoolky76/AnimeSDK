#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HGGIALOFNJP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x146F9410)
#define HGGIALOFNJP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x146F9330)
#define HGGIALOFNJP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x146F9610)
#define HGGIALOFNJP__CTOR_OFFSET UNITYSDK_OFFSET(0x146F9520)

inline static constexpr unsigned int HGGIALOFNJP_TypeDefinitionIndex = 43029;

class HGGIALOFNJP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* JFGBIJEAOCB; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* OJLPCMOKDJO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIALOFNJP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIALOFNJP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGGIALOFNJP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGGIALOFNJP_GDEOPIBNOIN_OFFSET))(this);
	}
};
