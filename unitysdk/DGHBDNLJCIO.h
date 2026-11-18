#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define DGHBDNLJCIO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1833CFF0)
#define DGHBDNLJCIO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1833CF60)
#define DGHBDNLJCIO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1833D1E0)
#define DGHBDNLJCIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1833D140)

inline static constexpr unsigned int DGHBDNLJCIO_TypeDefinitionIndex = 63906;

class DGHBDNLJCIO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHBDNLJCIO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHBDNLJCIO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DGHBDNLJCIO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHBDNLJCIO_GDEOPIBNOIN_OFFSET))(this);
	}
};
