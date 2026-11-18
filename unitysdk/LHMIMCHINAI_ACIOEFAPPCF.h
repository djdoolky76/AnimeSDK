#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ONBNJIHCGCE.h"

#define LHMIMCHINAI_ACIOEFAPPCF_HOHEPENGKAF_OFFSET UNITYSDK_OFFSET(0x16851FB0)
#define LHMIMCHINAI_ACIOEFAPPCF__CTOR_OFFSET UNITYSDK_OFFSET(0x16851FA0)

inline static constexpr unsigned int LHMIMCHINAI_ACIOEFAPPCF_TypeDefinitionIndex = 77089;

class LHMIMCHINAI_ACIOEFAPPCF : public ::System::Object
{
public:
	::System::Single HCOJLFECINK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMIMCHINAI_ACIOEFAPPCF__CTOR_OFFSET))(this);
	}

	::System::Boolean HOHEPENGKAF(::ONBNJIHCGCE IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::ONBNJIHCGCE))((::PBYTE)hIl2Cpp + LHMIMCHINAI_ACIOEFAPPCF_HOHEPENGKAF_OFFSET))(this, IMLLDOHDCNC);
	}
};
