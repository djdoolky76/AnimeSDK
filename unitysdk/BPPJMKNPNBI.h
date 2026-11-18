#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define BPPJMKNPNBI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1458E2F0)
#define BPPJMKNPNBI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1458E260)
#define BPPJMKNPNBI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1458E450)
#define BPPJMKNPNBI__CTOR_OFFSET UNITYSDK_OFFSET(0x1458E3B0)

inline static constexpr unsigned int BPPJMKNPNBI_TypeDefinitionIndex = 45336;

class BPPJMKNPNBI : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EFIJGFCFOJI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPJMKNPNBI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPJMKNPNBI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BPPJMKNPNBI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPPJMKNPNBI_GDEOPIBNOIN_OFFSET))(this);
	}
};
