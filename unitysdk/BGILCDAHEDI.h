#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

#define BGILCDAHEDI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x18675190)
#define BGILCDAHEDI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x18675140)
#define BGILCDAHEDI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x186752D0)
#define BGILCDAHEDI__CTOR_OFFSET UNITYSDK_OFFSET(0x186752C0)

inline static constexpr unsigned int BGILCDAHEDI_TypeDefinitionIndex = 54909;

class BGILCDAHEDI : public ::MHMFINLCNFN
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGILCDAHEDI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGILCDAHEDI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + BGILCDAHEDI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGILCDAHEDI_GDEOPIBNOIN_OFFSET))(this);
	}
};
