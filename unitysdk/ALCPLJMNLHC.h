#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class AAMKEDEDHPD_1;

#define ALCPLJMNLHC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x144F6D70)
#define ALCPLJMNLHC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x144F6CE0)
#define ALCPLJMNLHC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x144F6E60)
#define ALCPLJMNLHC__CTOR_OFFSET UNITYSDK_OFFSET(0x144F6DC0)

inline static constexpr unsigned int ALCPLJMNLHC_TypeDefinitionIndex = 57249;

class ALCPLJMNLHC : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* EBIFOIHBCFG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCPLJMNLHC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCPLJMNLHC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ALCPLJMNLHC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCPLJMNLHC_GDEOPIBNOIN_OFFSET))(this);
	}
};
