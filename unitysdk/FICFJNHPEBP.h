#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define FICFJNHPEBP_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10F6D860)
#define FICFJNHPEBP_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10F6D810)
#define FICFJNHPEBP_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10F6DCD0)
#define FICFJNHPEBP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F6DCC0)

inline static constexpr unsigned int FICFJNHPEBP_TypeDefinitionIndex = 88888;

class FICFJNHPEBP : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FICFJNHPEBP_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICFJNHPEBP_GDEOPIBNOIN_OFFSET))(this);
	}
};
