#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIAJBFBDOFH.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define GOBGDOAMKLM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17A27590)
#define GOBGDOAMKLM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17A27440)
#define GOBGDOAMKLM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17A27650)
#define GOBGDOAMKLM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A275E0)

inline static constexpr unsigned int GOBGDOAMKLM_TypeDefinitionIndex = 76117;

class GOBGDOAMKLM : public ::FIAJBFBDOFH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBGDOAMKLM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBGDOAMKLM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GOBGDOAMKLM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOBGDOAMKLM_GDEOPIBNOIN_OFFSET))(this);
	}
};
