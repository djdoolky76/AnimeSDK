#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define JCJLHJDDIEO_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1872F5E0)
#define JCJLHJDDIEO_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1872F500)
#define JCJLHJDDIEO_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1872F960)
#define JCJLHJDDIEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1872F870)

inline static constexpr unsigned int JCJLHJDDIEO_TypeDefinitionIndex = 67517;

class JCJLHJDDIEO : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* ANOLGDNNMCH; // 0x28
	::KCMIFNGABDC_1<::System::String*>* JBMFPBONFNL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJLHJDDIEO__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJLHJDDIEO_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + JCJLHJDDIEO_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJLHJDDIEO_GDEOPIBNOIN_OFFSET))(this);
	}
};
