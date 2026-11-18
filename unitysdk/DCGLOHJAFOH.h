#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DCGLOHJAFOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13287090)
#define DCGLOHJAFOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13286FB0)
#define DCGLOHJAFOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x132873F0)
#define DCGLOHJAFOH__CTOR_OFFSET UNITYSDK_OFFSET(0x13287300)

inline static constexpr unsigned int DCGLOHJAFOH_TypeDefinitionIndex = 52699;

class DCGLOHJAFOH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* KKLAIDCPDOO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGLOHJAFOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGLOHJAFOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DCGLOHJAFOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGLOHJAFOH_GDEOPIBNOIN_OFFSET))(this);
	}
};
