#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNFLMKFKKOK.h"

class EHGPNGPADCB;

#define GBDELDCBAAB_FGGAFENLMHP_OFFSET UNITYSDK_OFFSET(0x13246140)
#define GBDELDCBAAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13246080)

inline static constexpr unsigned int GBDELDCBAAB_TypeDefinitionIndex = 90254;

class GBDELDCBAAB : public ::FNFLMKFKKOK
{
public:
	::System::Void _ctor(::EHGPNGPADCB* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EHGPNGPADCB*))((::PBYTE)hIl2Cpp + GBDELDCBAAB__CTOR_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void FGGAFENLMHP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBDELDCBAAB_FGGAFENLMHP_OFFSET))(this);
	}
};
