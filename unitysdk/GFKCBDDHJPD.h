#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GFKCBDDHJPD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x15F192E0)
#define GFKCBDDHJPD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15F19190)
#define GFKCBDDHJPD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x15F19900)
#define GFKCBDDHJPD__CTOR_OFFSET UNITYSDK_OFFSET(0x15F197D0)

inline static constexpr unsigned int GFKCBDDHJPD_TypeDefinitionIndex = 83594;

class GFKCBDDHJPD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* AIJFEHJHFNG; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKCBDDHJPD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKCBDDHJPD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFKCBDDHJPD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFKCBDDHJPD_GDEOPIBNOIN_OFFSET))(this);
	}
};
