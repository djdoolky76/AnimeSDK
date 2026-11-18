#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define JCPNFOOGFJP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1980A100)
#define JCPNFOOGFJP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x19809FC0)
#define JCPNFOOGFJP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1980A260)
#define JCPNFOOGFJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1980A150)

inline static constexpr unsigned int JCPNFOOGFJP_TypeDefinitionIndex = 89281;

class JCPNFOOGFJP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x18
	::CPABOPKIGAL* MMFNFINOFPN; // 0x20
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPNFOOGFJP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPNFOOGFJP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JCPNFOOGFJP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCPNFOOGFJP_GDEOPIBNOIN_OFFSET))(this);
	}
};
