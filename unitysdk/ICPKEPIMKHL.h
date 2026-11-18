#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define ICPKEPIMKHL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A455080)
#define ICPKEPIMKHL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A454FA0)
#define ICPKEPIMKHL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A455290)
#define ICPKEPIMKHL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4551A0)

inline static constexpr unsigned int ICPKEPIMKHL_TypeDefinitionIndex = 79328;

class ICPKEPIMKHL : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x18
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPKEPIMKHL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPKEPIMKHL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ICPKEPIMKHL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPKEPIMKHL_GDEOPIBNOIN_OFFSET))(this);
	}
};
