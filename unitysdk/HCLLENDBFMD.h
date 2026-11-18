#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define HCLLENDBFMD_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x149FD600)
#define HCLLENDBFMD_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x149FD530)
#define HCLLENDBFMD_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x149FD780)
#define HCLLENDBFMD__CTOR_OFFSET UNITYSDK_OFFSET(0x149FD6E0)

inline static constexpr unsigned int HCLLENDBFMD_TypeDefinitionIndex = 70058;

class HCLLENDBFMD : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLENDBFMD__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLENDBFMD_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HCLLENDBFMD_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCLLENDBFMD_GDEOPIBNOIN_OFFSET))(this);
	}
};
