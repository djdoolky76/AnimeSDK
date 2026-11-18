#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define PKMBIGJFGJJ_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1B9EF860)
#define PKMBIGJFGJJ_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1B9EF660)
#define PKMBIGJFGJJ_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1B9EFD50)
#define PKMBIGJFGJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EFB80)

inline static constexpr unsigned int PKMBIGJFGJJ_TypeDefinitionIndex = 56828;

class PKMBIGJFGJJ : public ::CGJEMKCKIJG
{
public:
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKMBIGJFGJJ_GDEOPIBNOIN_OFFSET))(this);
	}
};
