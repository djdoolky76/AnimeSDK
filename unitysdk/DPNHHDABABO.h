#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define DPNHHDABABO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x148C09E0)
#define DPNHHDABABO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x148C0950)
#define DPNHHDABABO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x148C0AD0)
#define DPNHHDABABO__CTOR_OFFSET UNITYSDK_OFFSET(0x148C0A30)

inline static constexpr unsigned int DPNHHDABABO_TypeDefinitionIndex = 50014;

class DPNHHDABABO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* KGBDIICHFEL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNHHDABABO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNHHDABABO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DPNHHDABABO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNHHDABABO_GDEOPIBNOIN_OFFSET))(this);
	}
};
