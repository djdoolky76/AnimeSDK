#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FAKDIAMHDGM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17134370)
#define FAKDIAMHDGM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x171342A0)
#define FAKDIAMHDGM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x171346C0)
#define FAKDIAMHDGM__CTOR_OFFSET UNITYSDK_OFFSET(0x171345D0)

inline static constexpr unsigned int FAKDIAMHDGM_TypeDefinitionIndex = 58655;

class FAKDIAMHDGM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KNFDOEFIOHN; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* CNFGPELOPNM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDIAMHDGM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDIAMHDGM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FAKDIAMHDGM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKDIAMHDGM_GDEOPIBNOIN_OFFSET))(this);
	}
};
