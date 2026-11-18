#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define KKLJOGBAFMH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13C6D8A0)
#define KKLJOGBAFMH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x13C6D850)
#define KKLJOGBAFMH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13C6DBA0)
#define KKLJOGBAFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6DB90)

inline static constexpr unsigned int KKLJOGBAFMH_TypeDefinitionIndex = 53107;

class KKLJOGBAFMH : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLJOGBAFMH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLJOGBAFMH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KKLJOGBAFMH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKLJOGBAFMH_GDEOPIBNOIN_OFFSET))(this);
	}
};
