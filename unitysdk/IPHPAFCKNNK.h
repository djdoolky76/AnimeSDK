#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define IPHPAFCKNNK_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13CA21E0)
#define IPHPAFCKNNK_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13CA2100)
#define IPHPAFCKNNK_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13CA2500)
#define IPHPAFCKNNK__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA2410)

inline static constexpr unsigned int IPHPAFCKNNK_TypeDefinitionIndex = 79853;

class IPHPAFCKNNK : public ::MHMFINLCNFN
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* GJBJHFBIDFD; // 0x28
	::AAMKEDEDHPD_1<::System::Int32>* OFCMLGGAPAM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPAFCKNNK__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPAFCKNNK_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + IPHPAFCKNNK_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPHPAFCKNNK_GDEOPIBNOIN_OFFSET))(this);
	}
};
