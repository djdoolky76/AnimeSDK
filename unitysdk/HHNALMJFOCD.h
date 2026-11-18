#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define HHNALMJFOCD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14A14ED0)
#define HHNALMJFOCD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14A14DF0)
#define HHNALMJFOCD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14A15470)
#define HHNALMJFOCD__CTOR_OFFSET UNITYSDK_OFFSET(0x14A15380)

inline static constexpr unsigned int HHNALMJFOCD_TypeDefinitionIndex = 69542;

class HHNALMJFOCD : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNALMJFOCD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNALMJFOCD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HHNALMJFOCD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNALMJFOCD_GDEOPIBNOIN_OFFSET))(this);
	}
};
