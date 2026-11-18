#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PIIPNCNDBEN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C1D73B0)
#define PIIPNCNDBEN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C1D7270)
#define PIIPNCNDBEN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C1D75C0)
#define PIIPNCNDBEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D74A0)

inline static constexpr unsigned int PIIPNCNDBEN_TypeDefinitionIndex = 49486;

class PIIPNCNDBEN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* ICGBACLFMIL; // 0x18
	::KCMIFNGABDC_1<::System::Single>* MEINJKFJIGE; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIPNCNDBEN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIPNCNDBEN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PIIPNCNDBEN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIIPNCNDBEN_GDEOPIBNOIN_OFFSET))(this);
	}
};
