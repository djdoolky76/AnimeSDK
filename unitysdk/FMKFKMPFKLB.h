#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define FMKFKMPFKLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13229B80)
#define FMKFKMPFKLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13229AF0)
#define FMKFKMPFKLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13229DC0)
#define FMKFKMPFKLB__CTOR_OFFSET UNITYSDK_OFFSET(0x13229D20)

inline static constexpr unsigned int FMKFKMPFKLB_TypeDefinitionIndex = 83680;

class FMKFKMPFKLB : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* AHLKDKJMCJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFKMPFKLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFKMPFKLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FMKFKMPFKLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKFKMPFKLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
