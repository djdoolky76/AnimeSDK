#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define PPOGIEKOBEG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1C2C8CB0)
#define PPOGIEKOBEG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1C2C8C20)
#define PPOGIEKOBEG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1C2C9020)
#define PPOGIEKOBEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C8F80)

inline static constexpr unsigned int PPOGIEKOBEG_TypeDefinitionIndex = 88841;

class PPOGIEKOBEG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* JNLHJHOBEHI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOGIEKOBEG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOGIEKOBEG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PPOGIEKOBEG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOGIEKOBEG_GDEOPIBNOIN_OFFSET))(this);
	}
};
