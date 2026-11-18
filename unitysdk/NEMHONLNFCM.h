#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;

#define NEMHONLNFCM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x115873D0)
#define NEMHONLNFCM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11587300)
#define NEMHONLNFCM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11587510)
#define NEMHONLNFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x11587470)

inline static constexpr unsigned int NEMHONLNFCM_TypeDefinitionIndex = 73298;

class NEMHONLNFCM : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMHONLNFCM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMHONLNFCM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NEMHONLNFCM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMHONLNFCM_GDEOPIBNOIN_OFFSET))(this);
	}
};
