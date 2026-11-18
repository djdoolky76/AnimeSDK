#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define HEKLECHLNMN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F2DD50)
#define HEKLECHLNMN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F2DC80)
#define HEKLECHLNMN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F2E000)
#define HEKLECHLNMN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2DF60)

inline static constexpr unsigned int HEKLECHLNMN_TypeDefinitionIndex = 83453;

class HEKLECHLNMN : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKLECHLNMN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKLECHLNMN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HEKLECHLNMN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKLECHLNMN_GDEOPIBNOIN_OFFSET))(this);
	}
};
