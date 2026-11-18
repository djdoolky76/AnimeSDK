#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define CHJJPPBDGFO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16A2B5B0)
#define CHJJPPBDGFO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16A2B520)
#define CHJJPPBDGFO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16A2B6D0)
#define CHJJPPBDGFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16A2B610)

inline static constexpr unsigned int CHJJPPBDGFO_TypeDefinitionIndex = 76342;

class CHJJPPBDGFO : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJJPPBDGFO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJJPPBDGFO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHJJPPBDGFO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHJJPPBDGFO_GDEOPIBNOIN_OFFSET))(this);
	}
};
