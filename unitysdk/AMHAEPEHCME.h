#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define AMHAEPEHCME_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1266AC80)
#define AMHAEPEHCME_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1266ABA0)
#define AMHAEPEHCME_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1266B110)
#define AMHAEPEHCME__CTOR_OFFSET UNITYSDK_OFFSET(0x1266B020)

inline static constexpr unsigned int AMHAEPEHCME_TypeDefinitionIndex = 63140;

class AMHAEPEHCME : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* NPLPDLNIMEI; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAEPEHCME__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAEPEHCME_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AMHAEPEHCME_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHAEPEHCME_GDEOPIBNOIN_OFFSET))(this);
	}
};
