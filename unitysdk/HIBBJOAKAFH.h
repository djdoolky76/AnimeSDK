#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define HIBBJOAKAFH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D2FE10)
#define HIBBJOAKAFH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D2FCC0)
#define HIBBJOAKAFH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D30070)
#define HIBBJOAKAFH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2FF40)

inline static constexpr unsigned int HIBBJOAKAFH_TypeDefinitionIndex = 43642;

class HIBBJOAKAFH : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* INJDHLHIEBD; // 0x28
	::KCMIFNGABDC_1<::System::Single>* MNKLAMCHAEH; // 0x30
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIBBJOAKAFH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIBBJOAKAFH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HIBBJOAKAFH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIBBJOAKAFH_GDEOPIBNOIN_OFFSET))(this);
	}
};
