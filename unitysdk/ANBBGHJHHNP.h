#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;
class HOFAIFGAHGJ;
template <typename T> class KCMIFNGABDC_1;

#define ANBBGHJHHNP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14C17540)
#define ANBBGHJHHNP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14C17400)
#define ANBBGHJHHNP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14C17760)
#define ANBBGHJHHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x14C17660)

inline static constexpr unsigned int ANBBGHJHHNP_TypeDefinitionIndex = 72731;

class ANBBGHJHHNP : public ::CGJEMKCKIJG
{
public:
	::HOFAIFGAHGJ* LOJEMALELOH; // 0x18
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* BHNDKIBCOGG; // 0x20
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBBGHJHHNP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBBGHJHHNP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ANBBGHJHHNP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANBBGHJHHNP_GDEOPIBNOIN_OFFSET))(this);
	}
};
