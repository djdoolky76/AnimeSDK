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

#define DDFFEFBKMNI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x7F6CF40)
#define DDFFEFBKMNI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x7F6CC80)
#define DDFFEFBKMNI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x7F6D4B0)
#define DDFFEFBKMNI__CTOR_OFFSET UNITYSDK_OFFSET(0x7F6D2B0)

inline static constexpr unsigned int DDFFEFBKMNI_TypeDefinitionIndex = 66047;

class DDFFEFBKMNI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18
	::KCMIFNGABDC_1<::System::String*>* AKKDNLOBHJP; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* ELGLFHOPLHI; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* IKKJLHAOAFF; // 0x38
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* CJHGOOPHALO; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFFEFBKMNI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFFEFBKMNI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DDFFEFBKMNI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFFEFBKMNI_GDEOPIBNOIN_OFFSET))(this);
	}
};
