#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FEIGFJIPBKP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x191B1DC0)
#define FEIGFJIPBKP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x191B1CF0)
#define FEIGFJIPBKP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x191B1F90)
#define FEIGFJIPBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x191B1EF0)

inline static constexpr unsigned int FEIGFJIPBKP_TypeDefinitionIndex = 80880;

class FEIGFJIPBKP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIGFJIPBKP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIGFJIPBKP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FEIGFJIPBKP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEIGFJIPBKP_GDEOPIBNOIN_OFFSET))(this);
	}
};
