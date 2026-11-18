#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define OFIALPNPOBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x114F3CA0)
#define OFIALPNPOBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x114F3BC0)
#define OFIALPNPOBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x114F4370)
#define OFIALPNPOBI__CTOR_OFFSET UNITYSDK_OFFSET(0x114F4280)

inline static constexpr unsigned int OFIALPNPOBI_TypeDefinitionIndex = 86341;

class OFIALPNPOBI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* JGGNCCPFDNH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HHMPFIANODF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIALPNPOBI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIALPNPOBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OFIALPNPOBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIALPNPOBI_GDEOPIBNOIN_OFFSET))(this);
	}
};
