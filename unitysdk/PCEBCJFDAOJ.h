#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define PCEBCJFDAOJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xFDA1750)
#define PCEBCJFDAOJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xFDA1670)
#define PCEBCJFDAOJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xFDA1CC0)
#define PCEBCJFDAOJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFDA1BD0)

inline static constexpr unsigned int PCEBCJFDAOJ_TypeDefinitionIndex = 87938;

class PCEBCJFDAOJ : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* KCAIFAOOAKM; // 0x18
	::AAMKEDEDHPD_1<::System::Boolean>* LKBFJFGAFMN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEBCJFDAOJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEBCJFDAOJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PCEBCJFDAOJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCEBCJFDAOJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
