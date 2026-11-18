#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define BEFODJHEKHM_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13622530)
#define BEFODJHEKHM_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x136223F0)
#define BEFODJHEKHM_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13622930)
#define BEFODJHEKHM__CTOR_OFFSET UNITYSDK_OFFSET(0x13622830)

inline static constexpr unsigned int BEFODJHEKHM_TypeDefinitionIndex = 62576;

class BEFODJHEKHM : public ::CGJEMKCKIJG
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x18
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x20
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFODJHEKHM__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFODJHEKHM_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BEFODJHEKHM_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFODJHEKHM_GDEOPIBNOIN_OFFSET))(this);
	}
};
