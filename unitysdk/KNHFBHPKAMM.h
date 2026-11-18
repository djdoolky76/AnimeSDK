#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define KNHFBHPKAMM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17919E80)
#define KNHFBHPKAMM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17919DF0)
#define KNHFBHPKAMM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1791A080)
#define KNHFBHPKAMM__CTOR_OFFSET UNITYSDK_OFFSET(0x17919FE0)

inline static constexpr unsigned int KNHFBHPKAMM_TypeDefinitionIndex = 75780;

class KNHFBHPKAMM : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFBHPKAMM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFBHPKAMM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KNHFBHPKAMM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHFBHPKAMM_GDEOPIBNOIN_OFFSET))(this);
	}
};
