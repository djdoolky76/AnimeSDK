#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CBPHEOPEDKO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15313A20)
#define CBPHEOPEDKO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x153138E0)
#define CBPHEOPEDKO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15313C10)
#define CBPHEOPEDKO__CTOR_OFFSET UNITYSDK_OFFSET(0x15313AF0)

inline static constexpr unsigned int CBPHEOPEDKO_TypeDefinitionIndex = 87191;

class CBPHEOPEDKO : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* MEINJKFJIGE; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x20
	::KCMIFNGABDC_1<::System::Boolean>* ICGBACLFMIL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHEOPEDKO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHEOPEDKO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CBPHEOPEDKO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPHEOPEDKO_GDEOPIBNOIN_OFFSET))(this);
	}
};
