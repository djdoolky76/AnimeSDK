#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define GHKIEKNEDHP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CC6AC0)
#define GHKIEKNEDHP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CC69E0)
#define GHKIEKNEDHP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CC6C10)
#define GHKIEKNEDHP__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC6B20)

inline static constexpr unsigned int GHKIEKNEDHP_TypeDefinitionIndex = 72947;

class GHKIEKNEDHP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* FHHAAHFHJLJ; // 0x28
	::KCMIFNGABDC_1<::System::String*>* PMEJMLBPAMC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKIEKNEDHP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKIEKNEDHP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GHKIEKNEDHP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHKIEKNEDHP_GDEOPIBNOIN_OFFSET))(this);
	}
};
