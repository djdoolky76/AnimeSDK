#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define FHMGMNHHGEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14296960)
#define FHMGMNHHGEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14296890)
#define FHMGMNHHGEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14296B30)
#define FHMGMNHHGEP__CTOR_OFFSET UNITYSDK_OFFSET(0x14296A90)

inline static constexpr unsigned int FHMGMNHHGEP_TypeDefinitionIndex = 69442;

class FHMGMNHHGEP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMGMNHHGEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMGMNHHGEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FHMGMNHHGEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHMGMNHHGEP_GDEOPIBNOIN_OFFSET))(this);
	}
};
