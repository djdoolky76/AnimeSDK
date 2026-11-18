#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class KCMIFNGABDC_1;

#define GFGIHELPDJB_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10FD5750)
#define GFGIHELPDJB_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10FD56C0)
#define GFGIHELPDJB_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10FD5B80)
#define GFGIHELPDJB__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD5AE0)

inline static constexpr unsigned int GFGIHELPDJB_TypeDefinitionIndex = 69513;

class GFGIHELPDJB : public ::MHMFINLCNFN
{
public:
	::KCMIFNGABDC_1<::System::Int32>* KIIOJMCLIAC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGIHELPDJB__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGIHELPDJB_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + GFGIHELPDJB_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGIHELPDJB_GDEOPIBNOIN_OFFSET))(this);
	}
};
