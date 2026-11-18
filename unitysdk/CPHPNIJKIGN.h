#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define CPHPNIJKIGN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x123D76C0)
#define CPHPNIJKIGN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x123D7630)
#define CPHPNIJKIGN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x123D7830)
#define CPHPNIJKIGN__CTOR_OFFSET UNITYSDK_OFFSET(0x123D7790)

inline static constexpr unsigned int CPHPNIJKIGN_TypeDefinitionIndex = 67601;

class CPHPNIJKIGN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPNIJKIGN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPNIJKIGN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CPHPNIJKIGN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPHPNIJKIGN_GDEOPIBNOIN_OFFSET))(this);
	}
};
