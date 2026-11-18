#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define NFKHDGJOBHA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xE738BB0)
#define NFKHDGJOBHA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xE738B20)
#define NFKHDGJOBHA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xE738CD0)
#define NFKHDGJOBHA__CTOR_OFFSET UNITYSDK_OFFSET(0xE738C10)

inline static constexpr unsigned int NFKHDGJOBHA_TypeDefinitionIndex = 39630;

class NFKHDGJOBHA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHDGJOBHA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHDGJOBHA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NFKHDGJOBHA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFKHDGJOBHA_GDEOPIBNOIN_OFFSET))(this);
	}
};
