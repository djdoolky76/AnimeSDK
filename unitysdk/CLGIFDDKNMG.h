#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CLGIFDDKNMG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A17DE0)
#define CLGIFDDKNMG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A17D10)
#define CLGIFDDKNMG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A18110)
#define CLGIFDDKNMG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A18020)

inline static constexpr unsigned int CLGIFDDKNMG_TypeDefinitionIndex = 57435;

class CLGIFDDKNMG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* FIHCOLIOBBG; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* NAEHDDIJHCP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGIFDDKNMG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGIFDDKNMG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CLGIFDDKNMG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLGIFDDKNMG_GDEOPIBNOIN_OFFSET))(this);
	}
};
