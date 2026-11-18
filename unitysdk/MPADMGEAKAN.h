#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MPADMGEAKAN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1920FF60)
#define MPADMGEAKAN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1920FE80)
#define MPADMGEAKAN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19210310)
#define MPADMGEAKAN__CTOR_OFFSET UNITYSDK_OFFSET(0x19210220)

inline static constexpr unsigned int MPADMGEAKAN_TypeDefinitionIndex = 61079;

class MPADMGEAKAN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* PNFLIAAKFDF; // 0x28
	::KCMIFNGABDC_1<::System::String*>* IKAPJJIEJKC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPADMGEAKAN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPADMGEAKAN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MPADMGEAKAN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPADMGEAKAN_GDEOPIBNOIN_OFFSET))(this);
	}
};
