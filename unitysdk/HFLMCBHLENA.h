#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class MKBBPOFGLOF;

#define HFLMCBHLENA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x146F8310)
#define HFLMCBHLENA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x146F8240)
#define HFLMCBHLENA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x146F86D0)
#define HFLMCBHLENA__CTOR_OFFSET UNITYSDK_OFFSET(0x146F8630)

inline static constexpr unsigned int HFLMCBHLENA_TypeDefinitionIndex = 75918;

class HFLMCBHLENA : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::MKBBPOFGLOF* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMCBHLENA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMCBHLENA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HFLMCBHLENA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFLMCBHLENA_GDEOPIBNOIN_OFFSET))(this);
	}
};
