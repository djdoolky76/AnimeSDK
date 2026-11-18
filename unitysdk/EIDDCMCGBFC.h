#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define EIDDCMCGBFC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1063DD90)
#define EIDDCMCGBFC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1063DBE0)
#define EIDDCMCGBFC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1063E190)
#define EIDDCMCGBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x1063E050)

inline static constexpr unsigned int EIDDCMCGBFC_TypeDefinitionIndex = 54861;

class EIDDCMCGBFC : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::System::Int32>* BGEPLBDIJJA; // 0x18
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDDCMCGBFC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDDCMCGBFC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EIDDCMCGBFC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIDDCMCGBFC_GDEOPIBNOIN_OFFSET))(this);
	}
};
