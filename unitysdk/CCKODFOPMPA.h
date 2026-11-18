#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CCKODFOPMPA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11534630)
#define CCKODFOPMPA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x115344E0)
#define CCKODFOPMPA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11534C50)
#define CCKODFOPMPA__CTOR_OFFSET UNITYSDK_OFFSET(0x11534B20)

inline static constexpr unsigned int CCKODFOPMPA_TypeDefinitionIndex = 42233;

class CCKODFOPMPA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x28
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKODFOPMPA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKODFOPMPA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CCKODFOPMPA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCKODFOPMPA_GDEOPIBNOIN_OFFSET))(this);
	}
};
