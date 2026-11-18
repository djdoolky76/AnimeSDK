#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define FHFHIIKNDMG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D76B90)
#define FHFHIIKNDMG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D76B00)
#define FHFHIIKNDMG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D76ED0)
#define FHFHIIKNDMG__CTOR_OFFSET UNITYSDK_OFFSET(0x11D76E30)

inline static constexpr unsigned int FHFHIIKNDMG_TypeDefinitionIndex = 78896;

class FHFHIIKNDMG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFHIIKNDMG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFHIIKNDMG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FHFHIIKNDMG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHFHIIKNDMG_GDEOPIBNOIN_OFFSET))(this);
	}
};
