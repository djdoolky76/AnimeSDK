#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define IFDIJCEOLNP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEBC9A10)
#define IFDIJCEOLNP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEBC9980)
#define IFDIJCEOLNP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEBC9BB0)
#define IFDIJCEOLNP__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC9B10)

inline static constexpr unsigned int IFDIJCEOLNP_TypeDefinitionIndex = 81322;

class IFDIJCEOLNP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::MoleMole::EntityHandle>* LEOKEOFNDLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDIJCEOLNP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDIJCEOLNP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IFDIJCEOLNP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFDIJCEOLNP_GDEOPIBNOIN_OFFSET))(this);
	}
};
