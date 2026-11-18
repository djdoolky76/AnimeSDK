#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FNCPBEGHHCM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11D89BC0)
#define FNCPBEGHHCM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11D89AF0)
#define FNCPBEGHHCM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11D89D00)
#define FNCPBEGHHCM__CTOR_OFFSET UNITYSDK_OFFSET(0x11D89C60)

inline static constexpr unsigned int FNCPBEGHHCM_TypeDefinitionIndex = 75860;

class FNCPBEGHHCM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCPBEGHHCM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCPBEGHHCM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FNCPBEGHHCM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNCPBEGHHCM_GDEOPIBNOIN_OFFSET))(this);
	}
};
