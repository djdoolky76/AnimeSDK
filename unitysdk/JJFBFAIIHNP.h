#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define JJFBFAIIHNP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1945EB60)
#define JJFBFAIIHNP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1945EA90)
#define JJFBFAIIHNP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1945ED20)
#define JJFBFAIIHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1945EC80)

inline static constexpr unsigned int JJFBFAIIHNP_TypeDefinitionIndex = 59334;

class JJFBFAIIHNP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFBFAIIHNP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFBFAIIHNP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JJFBFAIIHNP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFBFAIIHNP_GDEOPIBNOIN_OFFSET))(this);
	}
};
