#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define BLIGGJOKHHF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x113F00C0)
#define BLIGGJOKHHF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x113F0070)
#define BLIGGJOKHHF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x113F0120)
#define BLIGGJOKHHF__CTOR_OFFSET UNITYSDK_OFFSET(0x113F0110)

inline static constexpr unsigned int BLIGGJOKHHF_TypeDefinitionIndex = 70252;

class BLIGGJOKHHF : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIGGJOKHHF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIGGJOKHHF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BLIGGJOKHHF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIGGJOKHHF_GDEOPIBNOIN_OFFSET))(this);
	}
};
