#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define HGFCNOCDHKI_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x17E47140)
#define HGFCNOCDHKI_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x17E470B0)
#define HGFCNOCDHKI_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x17E47260)
#define HGFCNOCDHKI__CTOR_OFFSET UNITYSDK_OFFSET(0x17E471A0)

inline static constexpr unsigned int HGFCNOCDHKI_TypeDefinitionIndex = 43446;

class HGFCNOCDHKI : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFCNOCDHKI__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFCNOCDHKI_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + HGFCNOCDHKI_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGFCNOCDHKI_GDEOPIBNOIN_OFFSET))(this);
	}
};
