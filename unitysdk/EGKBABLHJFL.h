#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class BDBHIDMAEEA;
template <typename T> class KCMIFNGABDC_1;

#define EGKBABLHJFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x148DDE20)
#define EGKBABLHJFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x148DDD90)
#define EGKBABLHJFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x148DE2C0)
#define EGKBABLHJFL_IGAMDHACECC_OFFSET UNITYSDK_OFFSET(0x148DDFE0)
#define EGKBABLHJFL_LNLNNLGBCNC_OFFSET UNITYSDK_OFFSET(0x148DDE90)
#define EGKBABLHJFL__CTOR_OFFSET UNITYSDK_OFFSET(0x148DDF40)

inline static constexpr unsigned int EGKBABLHJFL_TypeDefinitionIndex = 64053;

class EGKBABLHJFL : public ::MHMFINLCNFN
{
public:
	// static const ::System::String* FPIEBDKEJAH; // 0x0
	::KCMIFNGABDC_1<::System::Boolean>* CIFLENFEEGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKBABLHJFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKBABLHJFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EGKBABLHJFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean IGAMDHACECC(::LGCNEDCMPKM& BKBGPKNGNMF, ::BDBHIDMAEEA*& HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&, ::BDBHIDMAEEA*&))((::PBYTE)hIl2Cpp + EGKBABLHJFL_IGAMDHACECC_OFFSET))(this, BKBGPKNGNMF, HODAIDNDKHD);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGKBABLHJFL_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void LNLNNLGBCNC(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EGKBABLHJFL_LNLNNLGBCNC_OFFSET))(this, BKBGPKNGNMF);
	}
};
