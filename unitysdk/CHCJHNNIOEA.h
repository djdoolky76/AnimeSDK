#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CHCJHNNIOEA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x128F23D0)
#define CHCJHNNIOEA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x128F2340)
#define CHCJHNNIOEA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x128F2770)
#define CHCJHNNIOEA__CTOR_OFFSET UNITYSDK_OFFSET(0x128F26D0)

inline static constexpr unsigned int CHCJHNNIOEA_TypeDefinitionIndex = 86855;

class CHCJHNNIOEA : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* OPNFMCBPBLH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCJHNNIOEA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCJHNNIOEA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CHCJHNNIOEA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHCJHNNIOEA_GDEOPIBNOIN_OFFSET))(this);
	}
};
