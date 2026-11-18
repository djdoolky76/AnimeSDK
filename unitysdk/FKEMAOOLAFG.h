#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FKEMAOOLAFG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14AD9100)
#define FKEMAOOLAFG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14AD9070)
#define FKEMAOOLAFG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14AD9340)
#define FKEMAOOLAFG__CTOR_OFFSET UNITYSDK_OFFSET(0x14AD92A0)

inline static constexpr unsigned int FKEMAOOLAFG_TypeDefinitionIndex = 65769;

class FKEMAOOLAFG : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* HBDAMPKJIME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEMAOOLAFG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEMAOOLAFG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FKEMAOOLAFG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEMAOOLAFG_GDEOPIBNOIN_OFFSET))(this);
	}
};
