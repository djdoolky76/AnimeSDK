#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define PCMENEMPLGF_OJHCFCLOHFI_KKGDDBCNLLD_OFFSET UNITYSDK_OFFSET(0x119560E0)
#define PCMENEMPLGF_OJHCFCLOHFI__CTOR_OFFSET UNITYSDK_OFFSET(0x119560D0)

inline static constexpr unsigned int PCMENEMPLGF_OJHCFCLOHFI_TypeDefinitionIndex = 62871;

class PCMENEMPLGF_OJHCFCLOHFI : public ::System::Object
{
public:
	::System::Int32 CKEHKDMINMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OJHCFCLOHFI__CTOR_OFFSET))(this);
	}

	::System::Boolean KKGDDBCNLLD(::BPHGNMNLLHF* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::BPHGNMNLLHF*))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OJHCFCLOHFI_KKGDDBCNLLD_OFFSET))(this, LJBPECKCCEA);
	}
};
