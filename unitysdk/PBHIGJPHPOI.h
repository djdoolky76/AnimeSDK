#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KCMIFNGABDC_1;

#define PBHIGJPHPOI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11B50A20)
#define PBHIGJPHPOI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11B508D0)
#define PBHIGJPHPOI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11B51470)
#define PBHIGJPHPOI__CTOR_OFFSET UNITYSDK_OFFSET(0x11B51340)

inline static constexpr unsigned int PBHIGJPHPOI_TypeDefinitionIndex = 49886;

class PBHIGJPHPOI : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* AHNMIAIPOOL; // 0x28
	::KCMIFNGABDC_1<::System::Collections::Generic::List_1<::System::Int32>*>* ONLGFJPNPNG; // 0x30
	::KCMIFNGABDC_1<::System::Int32>* PNOHDLJKFJI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHIGJPHPOI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHIGJPHPOI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + PBHIGJPHPOI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBHIGJPHPOI_GDEOPIBNOIN_OFFSET))(this);
	}
};
