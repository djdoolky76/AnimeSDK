#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define MOBPLLMBHJC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x131A7920)
#define MOBPLLMBHJC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x131A78B0)
#define MOBPLLMBHJC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x131A7820)
#define MOBPLLMBHJC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x131A7BA0)
#define MOBPLLMBHJC__CTOR_OFFSET UNITYSDK_OFFSET(0x131A7B00)

inline static constexpr unsigned int MOBPLLMBHJC_TypeDefinitionIndex = 65917;

class MOBPLLMBHJC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* LAFJDOMBEPG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBPLLMBHJC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBPLLMBHJC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MOBPLLMBHJC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOBPLLMBHJC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Boolean ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + MOBPLLMBHJC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
