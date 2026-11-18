#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define OCLJBAFIMOP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16BFA780)
#define OCLJBAFIMOP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16BFA6F0)
#define OCLJBAFIMOP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16BFA920)
#define OCLJBAFIMOP__CTOR_OFFSET UNITYSDK_OFFSET(0x16BFA880)

inline static constexpr unsigned int OCLJBAFIMOP_TypeDefinitionIndex = 57613;

class OCLJBAFIMOP : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::Foundation::ViewObject::ViewObjectHandle>* IADPDIIKLDC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLJBAFIMOP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLJBAFIMOP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OCLJBAFIMOP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLJBAFIMOP_GDEOPIBNOIN_OFFSET))(this);
	}
};
