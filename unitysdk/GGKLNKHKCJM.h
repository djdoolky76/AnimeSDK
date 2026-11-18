#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
class MKBBPOFGLOF;
template <typename T> class KCMIFNGABDC_1;

#define GGKLNKHKCJM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x179ED270)
#define GGKLNKHKCJM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x179ED070)
#define GGKLNKHKCJM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x179ED730)
#define GGKLNKHKCJM__CTOR_OFFSET UNITYSDK_OFFSET(0x179ED560)

inline static constexpr unsigned int GGKLNKHKCJM_TypeDefinitionIndex = 51054;

class GGKLNKHKCJM : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::System::Int32>* ABJIGFKGMNH; // 0x20
	::MKBBPOFGLOF* EGCCIODCJIA; // 0x28
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x30
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLNKHKCJM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLNKHKCJM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GGKLNKHKCJM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGKLNKHKCJM_GDEOPIBNOIN_OFFSET))(this);
	}
};
