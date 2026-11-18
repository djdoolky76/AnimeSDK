#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define AHDKFKPCFND_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17CCD6F0)
#define AHDKFKPCFND_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17CCD430)
#define AHDKFKPCFND_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17CCDAB0)
#define AHDKFKPCFND__CTOR_OFFSET UNITYSDK_OFFSET(0x17CCD830)

inline static constexpr unsigned int AHDKFKPCFND_TypeDefinitionIndex = 82120;

class AHDKFKPCFND : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* JMBPGMDOIAF; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x20
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x28
	::AAMKEDEDHPD_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x30
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x38
	::CPABOPKIGAL* MMFNFINOFPN; // 0x40
	::CPABOPKIGAL* JAIGFKHCMPE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDKFKPCFND__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDKFKPCFND_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AHDKFKPCFND_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDKFKPCFND_GDEOPIBNOIN_OFFSET))(this);
	}
};
