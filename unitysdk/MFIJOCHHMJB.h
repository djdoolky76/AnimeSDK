#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define MFIJOCHHMJB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12D7C960)
#define MFIJOCHHMJB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12D7C7B0)
#define MFIJOCHHMJB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12D7CDE0)
#define MFIJOCHHMJB__CTOR_OFFSET UNITYSDK_OFFSET(0x12D7CCA0)

inline static constexpr unsigned int MFIJOCHHMJB_TypeDefinitionIndex = 61201;

class MFIJOCHHMJB : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJOCHHMJB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJOCHHMJB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MFIJOCHHMJB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIJOCHHMJB_GDEOPIBNOIN_OFFSET))(this);
	}
};
