#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define KPDKMIALFBB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15173F50)
#define KPDKMIALFBB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15173E70)
#define KPDKMIALFBB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x151740F0)
#define KPDKMIALFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15174000)

inline static constexpr unsigned int KPDKMIALFBB_TypeDefinitionIndex = 61021;

class KPDKMIALFBB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ANIKPPNMKPH; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* HHGILNNMNAK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKMIALFBB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKMIALFBB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KPDKMIALFBB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDKMIALFBB_GDEOPIBNOIN_OFFSET))(this);
	}
};
