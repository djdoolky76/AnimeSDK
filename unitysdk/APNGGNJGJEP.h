#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define APNGGNJGJEP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11BE3C60)
#define APNGGNJGJEP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11BE3B90)
#define APNGGNJGJEP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11BE3EB0)
#define APNGGNJGJEP__CTOR_OFFSET UNITYSDK_OFFSET(0x11BE3E10)

inline static constexpr unsigned int APNGGNJGJEP_TypeDefinitionIndex = 86961;

class APNGGNJGJEP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNGGNJGJEP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNGGNJGJEP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + APNGGNJGJEP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNGGNJGJEP_GDEOPIBNOIN_OFFSET))(this);
	}
};
