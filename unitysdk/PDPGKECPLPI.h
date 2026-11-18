#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define PDPGKECPLPI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1AFD7130)
#define PDPGKECPLPI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1AFD7060)
#define PDPGKECPLPI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1AFD7270)
#define PDPGKECPLPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD71D0)

inline static constexpr unsigned int PDPGKECPLPI_TypeDefinitionIndex = 79377;

class PDPGKECPLPI : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGKECPLPI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGKECPLPI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PDPGKECPLPI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPGKECPLPI_GDEOPIBNOIN_OFFSET))(this);
	}
};
