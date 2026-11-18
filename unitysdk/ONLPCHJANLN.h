#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

namespace System { class String; }
template <typename T> class KCMIFNGABDC_1;

#define ONLPCHJANLN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x178A33C0)
#define ONLPCHJANLN_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x178A3330)
#define ONLPCHJANLN_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x178A3650)
#define ONLPCHJANLN__CTOR_OFFSET UNITYSDK_OFFSET(0x178A35B0)

inline static constexpr unsigned int ONLPCHJANLN_TypeDefinitionIndex = 92335;

class ONLPCHJANLN : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::String*>* HFEIPMCNCNI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLPCHJANLN__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLPCHJANLN_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONLPCHJANLN_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONLPCHJANLN_GDEOPIBNOIN_OFFSET))(this);
	}
};
