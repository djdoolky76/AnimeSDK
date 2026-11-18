#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define FGFEAEPOJDL_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x13210740)
#define FGFEAEPOJDL_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x132106B0)
#define FGFEAEPOJDL_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x13210860)
#define FGFEAEPOJDL__CTOR_OFFSET UNITYSDK_OFFSET(0x132107A0)

inline static constexpr unsigned int FGFEAEPOJDL_TypeDefinitionIndex = 89256;

class FGFEAEPOJDL : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFEAEPOJDL__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFEAEPOJDL_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + FGFEAEPOJDL_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGFEAEPOJDL_GDEOPIBNOIN_OFFSET))(this);
	}
};
