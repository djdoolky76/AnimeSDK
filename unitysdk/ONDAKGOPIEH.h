#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define ONDAKGOPIEH_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16F88EC0)
#define ONDAKGOPIEH_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16F88E30)
#define ONDAKGOPIEH_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16F893D0)
#define ONDAKGOPIEH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89310)

inline static constexpr unsigned int ONDAKGOPIEH_TypeDefinitionIndex = 71047;

class ONDAKGOPIEH : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAKGOPIEH__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAKGOPIEH_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + ONDAKGOPIEH_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONDAKGOPIEH_GDEOPIBNOIN_OFFSET))(this);
	}
};
