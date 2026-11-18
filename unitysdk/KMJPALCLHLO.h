#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class MPJKPJAIOEM;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KMJPALCLHLO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15BA2400)
#define KMJPALCLHLO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15BA2250)
#define KMJPALCLHLO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15BA28B0)
#define KMJPALCLHLO__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA2770)

inline static constexpr unsigned int KMJPALCLHLO_TypeDefinitionIndex = 80194;

class KMJPALCLHLO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* IBNLAAIELGL; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* CBJICLLDJDF; // 0x38
	::MPJKPJAIOEM* BGLKEFHLNAE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPALCLHLO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPALCLHLO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KMJPALCLHLO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJPALCLHLO_GDEOPIBNOIN_OFFSET))(this);
	}
};
