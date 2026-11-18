#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define BMHKGMOBHFC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115FEA10)
#define BMHKGMOBHFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115FE940)
#define BMHKGMOBHFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x115FEBA0)
#define BMHKGMOBHFC__CTOR_OFFSET UNITYSDK_OFFSET(0x115FEAB0)

inline static constexpr unsigned int BMHKGMOBHFC_TypeDefinitionIndex = 61658;

class BMHKGMOBHFC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Boolean>* HHGILNNMNAK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKGMOBHFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKGMOBHFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BMHKGMOBHFC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMHKGMOBHFC_GDEOPIBNOIN_OFFSET))(this);
	}
};
