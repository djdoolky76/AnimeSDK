#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CJEOBMJEFFF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1A1ABA30)
#define CJEOBMJEFFF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1A1AB880)
#define CJEOBMJEFFF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1A1ABE50)
#define CJEOBMJEFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1ABD10)

inline static constexpr unsigned int CJEOBMJEFFF_TypeDefinitionIndex = 78227;

class CJEOBMJEFFF : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOBMJEFFF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOBMJEFFF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CJEOBMJEFFF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJEOBMJEFFF_GDEOPIBNOIN_OFFSET))(this);
	}
};
