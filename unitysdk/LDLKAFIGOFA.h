#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define LDLKAFIGOFA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1635EE90)
#define LDLKAFIGOFA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1635EDC0)
#define LDLKAFIGOFA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1635EF90)
#define LDLKAFIGOFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1635EEF0)

inline static constexpr unsigned int LDLKAFIGOFA_TypeDefinitionIndex = 67592;

class LDLKAFIGOFA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKAFIGOFA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKAFIGOFA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LDLKAFIGOFA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDLKAFIGOFA_GDEOPIBNOIN_OFFSET))(this);
	}
};
