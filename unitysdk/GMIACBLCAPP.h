#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define GMIACBLCAPP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13DF0930)
#define GMIACBLCAPP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13DF0860)
#define GMIACBLCAPP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13DF0BC0)
#define GMIACBLCAPP__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF0B20)

inline static constexpr unsigned int GMIACBLCAPP_TypeDefinitionIndex = 74407;

class GMIACBLCAPP : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACBLCAPP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACBLCAPP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GMIACBLCAPP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIACBLCAPP_GDEOPIBNOIN_OFFSET))(this);
	}
};
