#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;

#define CAGAFFEHEMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14522E40)
#define CAGAFFEHEMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14522D00)
#define CAGAFFEHEMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14523010)
#define CAGAFFEHEMN__CTOR_OFFSET UNITYSDK_OFFSET(0x14522F10)

inline static constexpr unsigned int CAGAFFEHEMN_TypeDefinitionIndex = 78990;

class CAGAFFEHEMN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* MMFNFINOFPN; // 0x18
	::HOFAIFGAHGJ* KLKEIADHCPG; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* IHLDIOOCHEM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGAFFEHEMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGAFFEHEMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CAGAFFEHEMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGAFFEHEMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
