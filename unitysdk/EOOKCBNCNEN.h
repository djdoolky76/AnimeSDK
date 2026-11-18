#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define EOOKCBNCNEN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14185B20)
#define EOOKCBNCNEN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14185A50)
#define EOOKCBNCNEN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14185D00)
#define EOOKCBNCNEN__CTOR_OFFSET UNITYSDK_OFFSET(0x14185C60)

inline static constexpr unsigned int EOOKCBNCNEN_TypeDefinitionIndex = 48270;

class EOOKCBNCNEN : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKCBNCNEN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKCBNCNEN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOOKCBNCNEN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOKCBNCNEN_GDEOPIBNOIN_OFFSET))(this);
	}
};
