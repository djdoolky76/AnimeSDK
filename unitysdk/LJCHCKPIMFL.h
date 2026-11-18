#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define LJCHCKPIMFL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x168532B0)
#define LJCHCKPIMFL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16853260)
#define LJCHCKPIMFL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16853320)
#define LJCHCKPIMFL__CTOR_OFFSET UNITYSDK_OFFSET(0x16853310)

inline static constexpr unsigned int LJCHCKPIMFL_TypeDefinitionIndex = 70126;

class LJCHCKPIMFL : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCHCKPIMFL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCHCKPIMFL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + LJCHCKPIMFL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJCHCKPIMFL_GDEOPIBNOIN_OFFSET))(this);
	}
};
