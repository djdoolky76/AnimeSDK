#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define FOOICAFPHGI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x10ED6390)
#define FOOICAFPHGI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x10ED6340)
#define FOOICAFPHGI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x10ED64B0)
#define FOOICAFPHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED64A0)

inline static constexpr unsigned int FOOICAFPHGI_TypeDefinitionIndex = 56059;

class FOOICAFPHGI : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOICAFPHGI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOICAFPHGI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FOOICAFPHGI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOOICAFPHGI_GDEOPIBNOIN_OFFSET))(this);
	}
};
