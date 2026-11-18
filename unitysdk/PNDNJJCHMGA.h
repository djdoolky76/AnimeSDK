#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define PNDNJJCHMGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x137262E0)
#define PNDNJJCHMGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13726210)
#define PNDNJJCHMGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13726560)
#define PNDNJJCHMGA__CTOR_OFFSET UNITYSDK_OFFSET(0x137264C0)

inline static constexpr unsigned int PNDNJJCHMGA_TypeDefinitionIndex = 60102;

class PNDNJJCHMGA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNJJCHMGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNJJCHMGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PNDNJJCHMGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNDNJJCHMGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
