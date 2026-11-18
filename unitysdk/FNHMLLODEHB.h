#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define FNHMLLODEHB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179B7DF0)
#define FNHMLLODEHB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179B7CB0)
#define FNHMLLODEHB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179B8130)
#define FNHMLLODEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x179B8010)

inline static constexpr unsigned int FNHMLLODEHB_TypeDefinitionIndex = 43184;

class FNHMLLODEHB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* FKENPKMBINB; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* CBJICLLDJDF; // 0x20
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHMLLODEHB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHMLLODEHB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNHMLLODEHB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNHMLLODEHB_GDEOPIBNOIN_OFFSET))(this);
	}
};
