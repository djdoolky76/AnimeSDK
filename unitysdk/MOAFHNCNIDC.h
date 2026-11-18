#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define MOAFHNCNIDC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x131A7460)
#define MOAFHNCNIDC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x131A73D0)
#define MOAFHNCNIDC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x131A7810)
#define MOAFHNCNIDC__CTOR_OFFSET UNITYSDK_OFFSET(0x131A7770)

inline static constexpr unsigned int MOAFHNCNIDC_TypeDefinitionIndex = 72658;

class MOAFHNCNIDC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* EJLOPJOMHHN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAFHNCNIDC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAFHNCNIDC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MOAFHNCNIDC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAFHNCNIDC_GDEOPIBNOIN_OFFSET))(this);
	}
};
