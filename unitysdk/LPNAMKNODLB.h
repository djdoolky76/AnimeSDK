#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define LPNAMKNODLB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x14D557C0)
#define LPNAMKNODLB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x14D55730)
#define LPNAMKNODLB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x14D55B50)
#define LPNAMKNODLB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D55AB0)

inline static constexpr unsigned int LPNAMKNODLB_TypeDefinitionIndex = 61618;

class LPNAMKNODLB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* ELOAKMNGMHL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNAMKNODLB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNAMKNODLB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LPNAMKNODLB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPNAMKNODLB_GDEOPIBNOIN_OFFSET))(this);
	}
};
