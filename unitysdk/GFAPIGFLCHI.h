#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define GFAPIGFLCHI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x189FB4E0)
#define GFAPIGFLCHI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x189FB3A0)
#define GFAPIGFLCHI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x189FB8C0)
#define GFAPIGFLCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x189FB7B0)

inline static constexpr unsigned int GFAPIGFLCHI_TypeDefinitionIndex = 48877;

class GFAPIGFLCHI : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* DJHMJLEGMMI; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::MKBBPOFGLOF* EGPGPKDHALB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPIGFLCHI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPIGFLCHI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFAPIGFLCHI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPIGFLCHI_GDEOPIBNOIN_OFFSET))(this);
	}
};
