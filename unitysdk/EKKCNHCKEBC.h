#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define EKKCNHCKEBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1426D1B0)
#define EKKCNHCKEBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1426D070)
#define EKKCNHCKEBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1426D3C0)
#define EKKCNHCKEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1426D2A0)

inline static constexpr unsigned int EKKCNHCKEBC_TypeDefinitionIndex = 43930;

class EKKCNHCKEBC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Single>* ICGBACLFMIL; // 0x18
	::KCMIFNGABDC_1<::System::Single>* MEINJKFJIGE; // 0x20
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKCNHCKEBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKCNHCKEBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EKKCNHCKEBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKKCNHCKEBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
