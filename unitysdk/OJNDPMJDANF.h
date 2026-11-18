#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class HOFAIFGAHGJ;

#define OJNDPMJDANF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F807D0)
#define OJNDPMJDANF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F80740)
#define OJNDPMJDANF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F80860)
#define OJNDPMJDANF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F80820)

inline static constexpr unsigned int OJNDPMJDANF_TypeDefinitionIndex = 69317;

class OJNDPMJDANF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNDPMJDANF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNDPMJDANF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OJNDPMJDANF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJNDPMJDANF_GDEOPIBNOIN_OFFSET))(this);
	}
};
