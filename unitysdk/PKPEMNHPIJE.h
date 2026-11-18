#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PKPEMNHPIJE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1371E0D0)
#define PKPEMNHPIJE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1371DF90)
#define PKPEMNHPIJE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1371E2E0)
#define PKPEMNHPIJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1371E1C0)

inline static constexpr unsigned int PKPEMNHPIJE_TypeDefinitionIndex = 63875;

class PKPEMNHPIJE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Single>* FDPMDEJANJH; // 0x18
	::KCMIFNGABDC_1<::System::Single>* ICGBACLFMIL; // 0x20
	::KCMIFNGABDC_1<::System::Single>* MEINJKFJIGE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEMNHPIJE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEMNHPIJE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKPEMNHPIJE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKPEMNHPIJE_GDEOPIBNOIN_OFFSET))(this);
	}
};
