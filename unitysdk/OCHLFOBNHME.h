#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define OCHLFOBNHME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15F5AC40)
#define OCHLFOBNHME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15F5AB60)
#define OCHLFOBNHME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15F5AF50)
#define OCHLFOBNHME__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5AE60)

inline static constexpr unsigned int OCHLFOBNHME_TypeDefinitionIndex = 86193;

class OCHLFOBNHME : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* CBJICLLDJDF; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHLFOBNHME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHLFOBNHME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OCHLFOBNHME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCHLFOBNHME_GDEOPIBNOIN_OFFSET))(this);
	}
};
