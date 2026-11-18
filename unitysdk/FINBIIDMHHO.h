#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FINBIIDMHHO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116B5150)
#define FINBIIDMHHO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116B50C0)
#define FINBIIDMHHO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116B5290)
#define FINBIIDMHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x116B51F0)

inline static constexpr unsigned int FINBIIDMHHO_TypeDefinitionIndex = 78501;

class FINBIIDMHHO : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* AOGHABEAMOF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINBIIDMHHO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINBIIDMHHO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FINBIIDMHHO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FINBIIDMHHO_GDEOPIBNOIN_OFFSET))(this);
	}
};
