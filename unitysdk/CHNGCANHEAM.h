#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class AAMKEDEDHPD_1;
template <typename T> class KCMIFNGABDC_1;

#define CHNGCANHEAM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1325CAF0)
#define CHNGCANHEAM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1325C890)
#define CHNGCANHEAM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1325D0F0)
#define CHNGCANHEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1325CF30)

inline static constexpr unsigned int CHNGCANHEAM_TypeDefinitionIndex = 68887;

class CHNGCANHEAM : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Boolean>* JAIGFKHCMPE; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::KCMIFNGABDC_1<::System::String*>* FICDJOALKLI; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* HHGILNNMNAK; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNGCANHEAM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNGCANHEAM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHNGCANHEAM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHNGCANHEAM_GDEOPIBNOIN_OFFSET))(this);
	}
};
