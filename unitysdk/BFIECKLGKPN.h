#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define BFIECKLGKPN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1866B310)
#define BFIECKLGKPN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1866B0B0)
#define BFIECKLGKPN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1866B800)
#define BFIECKLGKPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1866B640)

inline static constexpr unsigned int BFIECKLGKPN_TypeDefinitionIndex = 60742;

class BFIECKLGKPN : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::String*>* ELGLFHOPLHI; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* IKKJLHAOAFF; // 0x30
	::KCMIFNGABDC_1<::System::String*>* AKKDNLOBHJP; // 0x38
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIECKLGKPN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIECKLGKPN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BFIECKLGKPN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFIECKLGKPN_GDEOPIBNOIN_OFFSET))(this);
	}
};
