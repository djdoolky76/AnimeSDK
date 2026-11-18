#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define DFHHBEPIICC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18335A40)
#define DFHHBEPIICC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18335970)
#define DFHHBEPIICC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x183361A0)
#define DFHHBEPIICC__CTOR_OFFSET UNITYSDK_OFFSET(0x183360B0)

inline static constexpr unsigned int DFHHBEPIICC_TypeDefinitionIndex = 89008;

class DFHHBEPIICC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* NNCCOAPAKMK; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHHBEPIICC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHHBEPIICC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DFHHBEPIICC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHHBEPIICC_GDEOPIBNOIN_OFFSET))(this);
	}
};
