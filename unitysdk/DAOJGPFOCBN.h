#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define DAOJGPFOCBN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x19A2E740)
#define DAOJGPFOCBN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19A2E670)
#define DAOJGPFOCBN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x19A2E910)
#define DAOJGPFOCBN__CTOR_OFFSET UNITYSDK_OFFSET(0x19A2E870)

inline static constexpr unsigned int DAOJGPFOCBN_TypeDefinitionIndex = 68631;

class DAOJGPFOCBN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJGPFOCBN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJGPFOCBN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DAOJGPFOCBN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAOJGPFOCBN_GDEOPIBNOIN_OFFSET))(this);
	}
};
