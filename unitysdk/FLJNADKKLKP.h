#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define FLJNADKKLKP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x11C59280)
#define FLJNADKKLKP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x11C59230)
#define FLJNADKKLKP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x11C59AB0)
#define FLJNADKKLKP_MBDDCFDHIEI_OFFSET UNITYSDK_OFFSET(0x11C594D0)
#define FLJNADKKLKP__CTOR_OFFSET UNITYSDK_OFFSET(0x11C59AA0)

inline static constexpr unsigned int FLJNADKKLKP_TypeDefinitionIndex = 52767;

class FLJNADKKLKP : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJNADKKLKP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJNADKKLKP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FLJNADKKLKP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLJNADKKLKP_GDEOPIBNOIN_OFFSET))(this);
	}

	static ::System::Boolean MBDDCFDHIEI(::System::UInt32 AOCOIDIMLIH, ::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FLJNADKKLKP_MBDDCFDHIEI_OFFSET))(AOCOIDIMLIH, BKBGPKNGNMF);
	}
};
