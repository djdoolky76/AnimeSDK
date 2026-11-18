#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define LKKDLDPKLPE_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x156640D0)
#define LKKDLDPKLPE_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x15664040)
#define LKKDLDPKLPE_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x156642D0)
#define LKKDLDPKLPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15664230)

inline static constexpr unsigned int LKKDLDPKLPE_TypeDefinitionIndex = 84103;

class LKKDLDPKLPE : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKDLDPKLPE__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKDLDPKLPE_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LKKDLDPKLPE_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKDLDPKLPE_GDEOPIBNOIN_OFFSET))(this);
	}
};
