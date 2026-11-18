#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define GGLKIIBPGHJ_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0xBB8DE50)
#define GGLKIIBPGHJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xBB8DDE0)
#define GGLKIIBPGHJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xBB8DC30)
#define GGLKIIBPGHJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xBB8E330)
#define GGLKIIBPGHJ__CTOR_OFFSET UNITYSDK_OFFSET(0xBB8E160)

inline static constexpr unsigned int GGLKIIBPGHJ_TypeDefinitionIndex = 77211;

class GGLKIIBPGHJ : public ::MHMFINLCNFN
{
public:
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* LCBMKIFMHFI; // 0x30
	::CPABOPKIGAL* BOHNBOELHDG; // 0x38
	::KCMIFNGABDC_1<::System::Int32>* ELAADEDGEIL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLKIIBPGHJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLKIIBPGHJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GGLKIIBPGHJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLKIIBPGHJ_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GGLKIIBPGHJ_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
