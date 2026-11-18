#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define JKJDKFPEDAE_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x1762C9B0)
#define JKJDKFPEDAE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1762C940)
#define JKJDKFPEDAE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1762C860)
#define JKJDKFPEDAE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1762CC70)
#define JKJDKFPEDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x1762CB80)

inline static constexpr unsigned int JKJDKFPEDAE_TypeDefinitionIndex = 78824;

class JKJDKFPEDAE : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* FCAICLNGNDM; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* BOHBDHAPLDN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDKFPEDAE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDKFPEDAE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JKJDKFPEDAE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JKJDKFPEDAE_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJDKFPEDAE_GDEOPIBNOIN_OFFSET))(this);
	}
};
