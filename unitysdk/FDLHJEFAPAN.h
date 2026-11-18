#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define FDLHJEFAPAN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x116A9320)
#define FDLHJEFAPAN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x116A9290)
#define FDLHJEFAPAN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x116A97D0)
#define FDLHJEFAPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x116A9730)

inline static constexpr unsigned int FDLHJEFAPAN_TypeDefinitionIndex = 50330;

class FDLHJEFAPAN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* KJENAFALOCK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLHJEFAPAN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLHJEFAPAN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FDLHJEFAPAN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLHJEFAPAN_GDEOPIBNOIN_OFFSET))(this);
	}
};
