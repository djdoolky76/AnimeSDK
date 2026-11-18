#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FNCHJCMOPOE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1322A0A0)
#define FNCHJCMOPOE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13229FD0)
#define FNCHJCMOPOE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1322A2E0)
#define FNCHJCMOPOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1322A1F0)

inline static constexpr unsigned int FNCHJCMOPOE_TypeDefinitionIndex = 65521;

class FNCHJCMOPOE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* AJKNEHLMKOI; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHJCMOPOE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHJCMOPOE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNCHJCMOPOE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCHJCMOPOE_GDEOPIBNOIN_OFFSET))(this);
	}
};
