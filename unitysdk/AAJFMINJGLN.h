#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;
class PFEOJDIJIBM;

#define AAJFMINJGLN_AHKNPAKMOEH_OFFSET UNITYSDK_OFFSET(0x142092E0)
#define AAJFMINJGLN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14209290)
#define AAJFMINJGLN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14209200)
#define AAJFMINJGLN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x142094D0)
#define AAJFMINJGLN__CTOR_OFFSET UNITYSDK_OFFSET(0x14209490)

inline static constexpr unsigned int AAJFMINJGLN_TypeDefinitionIndex = 51812;

class AAJFMINJGLN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJFMINJGLN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJFMINJGLN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AAJFMINJGLN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAJFMINJGLN_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Void AHKNPAKMOEH(::PFEOJDIJIBM* DACDAPIGBCB)
	{
		return ((::System::Void(*)(::PFEOJDIJIBM*))((::PBYTE)hIl2Cpp + AAJFMINJGLN_AHKNPAKMOEH_OFFSET))(DACDAPIGBCB);
	}
};
