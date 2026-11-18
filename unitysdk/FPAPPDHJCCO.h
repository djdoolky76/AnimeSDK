#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FPAPPDHJCCO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1750F540)
#define FPAPPDHJCCO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1750F4B0)
#define FPAPPDHJCCO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1750F690)
#define FPAPPDHJCCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1750F5F0)

inline static constexpr unsigned int FPAPPDHJCCO_TypeDefinitionIndex = 38332;

class FPAPPDHJCCO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* FDPMDEJANJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAPPDHJCCO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAPPDHJCCO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FPAPPDHJCCO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPAPPDHJCCO_GDEOPIBNOIN_OFFSET))(this);
	}
};
