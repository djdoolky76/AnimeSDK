#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define DHFCHHPMOLF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13E4E230)
#define DHFCHHPMOLF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13E4E150)
#define DHFCHHPMOLF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13E4E530)
#define DHFCHHPMOLF__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4E440)

inline static constexpr unsigned int DHFCHHPMOLF_TypeDefinitionIndex = 67357;

class DHFCHHPMOLF : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Single>* KJHHMLJPDJO; // 0x28
	::KCMIFNGABDC_1<::System::String*>* FMMECCNEOCO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFCHHPMOLF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFCHHPMOLF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + DHFCHHPMOLF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFCHHPMOLF_GDEOPIBNOIN_OFFSET))(this);
	}
};
