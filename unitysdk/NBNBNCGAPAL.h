#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define NBNBNCGAPAL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18F9A620)
#define NBNBNCGAPAL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18F9A540)
#define NBNBNCGAPAL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x18F9A8A0)
#define NBNBNCGAPAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18F9A7B0)

inline static constexpr unsigned int NBNBNCGAPAL_TypeDefinitionIndex = 44350;

class NBNBNCGAPAL : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* JOECHPCHKFM; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* FPKAHBPMLKJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNBNCGAPAL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNBNCGAPAL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + NBNBNCGAPAL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBNBNCGAPAL_GDEOPIBNOIN_OFFSET))(this);
	}
};
