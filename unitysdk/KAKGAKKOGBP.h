#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define KAKGAKKOGBP_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x157DAF00)
#define KAKGAKKOGBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x157DAE90)
#define KAKGAKKOGBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x157DADB0)
#define KAKGAKKOGBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x157DB2C0)
#define KAKGAKKOGBP__CTOR_OFFSET UNITYSDK_OFFSET(0x157DB1D0)

inline static constexpr unsigned int KAKGAKKOGBP_TypeDefinitionIndex = 87431;

class KAKGAKKOGBP : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x28
	::KCMIFNGABDC_1<::System::Boolean>* NCOGBILBLHO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKGAKKOGBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKGAKKOGBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KAKGAKKOGBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KAKGAKKOGBP_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKGAKKOGBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
