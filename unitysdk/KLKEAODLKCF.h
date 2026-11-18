#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define KLKEAODLKCF_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x1634AFD0)
#define KLKEAODLKCF_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x1634AF80)
#define KLKEAODLKCF_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x1634B400)
#define KLKEAODLKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x1634B3F0)

inline static constexpr unsigned int KLKEAODLKCF_TypeDefinitionIndex = 57158;

class KLKEAODLKCF : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEAODLKCF__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEAODLKCF_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + KLKEAODLKCF_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLKEAODLKCF_GDEOPIBNOIN_OFFSET))(this);
	}
};
