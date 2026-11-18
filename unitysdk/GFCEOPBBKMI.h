#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define GFCEOPBBKMI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16CBF0C0)
#define GFCEOPBBKMI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16CBF030)
#define GFCEOPBBKMI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16CBF2C0)
#define GFCEOPBBKMI__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBF220)

inline static constexpr unsigned int GFCEOPBBKMI_TypeDefinitionIndex = 64128;

class GFCEOPBBKMI : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* EIANHMMPJML; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCEOPBBKMI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCEOPBBKMI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFCEOPBBKMI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCEOPBBKMI_GDEOPIBNOIN_OFFSET))(this);
	}
};
