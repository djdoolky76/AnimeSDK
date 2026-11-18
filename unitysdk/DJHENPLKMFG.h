#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define DJHENPLKMFG_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x12BB4120)
#define DJHENPLKMFG_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x12BB3F20)
#define DJHENPLKMFG_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x12BB45A0)
#define DJHENPLKMFG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB4420)

inline static constexpr unsigned int DJHENPLKMFG_TypeDefinitionIndex = 82406;

class DJHENPLKMFG : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* GAFNNKAPHPH; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::UnityEngine::Vector3>* OLLFNNGJCFN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHENPLKMFG__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHENPLKMFG_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DJHENPLKMFG_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJHENPLKMFG_GDEOPIBNOIN_OFFSET))(this);
	}
};
