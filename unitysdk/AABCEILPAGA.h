#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

class CPABOPKIGAL;

#define AABCEILPAGA_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x16D58620)
#define AABCEILPAGA_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x16D58590)
#define AABCEILPAGA_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x16D58740)
#define AABCEILPAGA__CTOR_OFFSET UNITYSDK_OFFSET(0x16D58680)

inline static constexpr unsigned int AABCEILPAGA_TypeDefinitionIndex = 51742;

class AABCEILPAGA : public ::CGJEMKCKIJG
{
public:
	::CPABOPKIGAL* LMDIMIIBPLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABCEILPAGA__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABCEILPAGA_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + AABCEILPAGA_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AABCEILPAGA_GDEOPIBNOIN_OFFSET))(this);
	}
};
