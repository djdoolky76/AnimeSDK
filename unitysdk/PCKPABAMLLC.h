#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PCKPABAMLLC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x150B3AD0)
#define PCKPABAMLLC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x150B3990)
#define PCKPABAMLLC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x150B3CC0)
#define PCKPABAMLLC__CTOR_OFFSET UNITYSDK_OFFSET(0x150B3BA0)

inline static constexpr unsigned int PCKPABAMLLC_TypeDefinitionIndex = 87381;

class PCKPABAMLLC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* ICGBACLFMIL; // 0x18
	::AAMKEDEDHPD_1<::System::Int32>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::Int32>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKPABAMLLC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKPABAMLLC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCKPABAMLLC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCKPABAMLLC_GDEOPIBNOIN_OFFSET))(this);
	}
};
