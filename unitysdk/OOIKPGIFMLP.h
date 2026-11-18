#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define OOIKPGIFMLP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178A5020)
#define OOIKPGIFMLP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178A4F90)
#define OOIKPGIFMLP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178A52C0)
#define OOIKPGIFMLP__CTOR_OFFSET UNITYSDK_OFFSET(0x178A5220)

inline static constexpr unsigned int OOIKPGIFMLP_TypeDefinitionIndex = 83071;

class OOIKPGIFMLP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* NHMDNJPPAJD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIKPGIFMLP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIKPGIFMLP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OOIKPGIFMLP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIKPGIFMLP_GDEOPIBNOIN_OFFSET))(this);
	}
};
