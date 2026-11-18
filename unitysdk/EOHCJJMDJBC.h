#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGJEMKCKIJG.h"
#include "unitysdk/LGCNEDCMPKM.h"

template <typename T> class AAMKEDEDHPD_1;

#define EOHCJJMDJBC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0xF9E55B0)
#define EOHCJJMDJBC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0xF9E5520)
#define EOHCJJMDJBC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0xF9E58C0)
#define EOHCJJMDJBC__CTOR_OFFSET UNITYSDK_OFFSET(0xF9E5820)

inline static constexpr unsigned int EOHCJJMDJBC_TypeDefinitionIndex = 55009;

class EOHCJJMDJBC : public ::CGJEMKCKIJG
{
public:
	::AAMKEDEDHPD_1<::System::Int32>* MCPEIEOOGFE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHCJJMDJBC__CTOR_OFFSET))(this);
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHCJJMDJBC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + EOHCJJMDJBC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHCJJMDJBC_GDEOPIBNOIN_OFFSET))(this);
	}
};
