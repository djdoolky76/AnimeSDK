#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define CFMOJJAMEKC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x199FE780)
#define CFMOJJAMEKC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x199FE6F0)
#define CFMOJJAMEKC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x199FE990)
#define CFMOJJAMEKC__CTOR_OFFSET UNITYSDK_OFFSET(0x199FE8F0)

inline static constexpr unsigned int CFMOJJAMEKC_TypeDefinitionIndex = 73732;

class CFMOJJAMEKC : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOJJAMEKC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOJJAMEKC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CFMOJJAMEKC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFMOJJAMEKC_GDEOPIBNOIN_OFFSET))(this);
	}
};
