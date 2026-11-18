#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define OAOBDHFCCPN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xEEC9000)
#define OAOBDHFCCPN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xEEC8DF0)
#define OAOBDHFCCPN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xEEC9540)
#define OAOBDHFCCPN__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC93A0)

inline static constexpr unsigned int OAOBDHFCCPN_TypeDefinitionIndex = 69589;

class OAOBDHFCCPN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Boolean>* GDPDHGENNOF; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* FIEMLKIJPPH; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* KOMLOBLPHLF; // 0x38
	::KCMIFNGABDC_1<::System::Boolean>* PDLKHONAJFG; // 0x40
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* HPEFMJFCIHN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOBDHFCCPN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOBDHFCCPN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + OAOBDHFCCPN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOBDHFCCPN_GDEOPIBNOIN_OFFSET))(this);
	}
};
