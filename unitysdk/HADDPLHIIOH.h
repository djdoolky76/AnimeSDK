#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define HADDPLHIIOH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1816BA30)
#define HADDPLHIIOH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1816B950)
#define HADDPLHIIOH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1816BDD0)
#define HADDPLHIIOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1816BCE0)

inline static constexpr unsigned int HADDPLHIIOH_TypeDefinitionIndex = 91974;

class HADDPLHIIOH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* HHGILNNMNAK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADDPLHIIOH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADDPLHIIOH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HADDPLHIIOH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HADDPLHIIOH_GDEOPIBNOIN_OFFSET))(this);
	}
};
