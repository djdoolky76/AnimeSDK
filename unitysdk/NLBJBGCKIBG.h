#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define NLBJBGCKIBG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AE28030)
#define NLBJBGCKIBG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AE27FA0)
#define NLBJBGCKIBG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AE28250)
#define NLBJBGCKIBG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE281B0)

inline static constexpr unsigned int NLBJBGCKIBG_TypeDefinitionIndex = 54492;

class NLBJBGCKIBG : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* AMPDDKLLHOI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBJBGCKIBG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBJBGCKIBG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NLBJBGCKIBG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLBJBGCKIBG_GDEOPIBNOIN_OFFSET))(this);
	}
};
