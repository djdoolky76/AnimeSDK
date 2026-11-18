#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIHGFNHCBEI;

#define IBEBNCBDNMC_PCHPBIFBLCE_ANMDCBMDMNL_OFFSET UNITYSDK_OFFSET(0x16A90BE0)
#define IBEBNCBDNMC_PCHPBIFBLCE_DGEBDKDFDCP_OFFSET UNITYSDK_OFFSET(0x16A90C20)
#define IBEBNCBDNMC_PCHPBIFBLCE_GOJJEIKEIMN_OFFSET UNITYSDK_OFFSET(0x16A90C60)
#define IBEBNCBDNMC_PCHPBIFBLCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A90BD0)

inline static constexpr unsigned int IBEBNCBDNMC_PCHPBIFBLCE_TypeDefinitionIndex = 45416;

class IBEBNCBDNMC_PCHPBIFBLCE : public ::System::Object
{
public:
	::GIHGFNHCBEI* BGNPIFFIMME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PCHPBIFBLCE__CTOR_OFFSET))(this);
	}

	::System::Boolean ANMDCBMDMNL(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PCHPBIFBLCE_ANMDCBMDMNL_OFFSET))(this, KDDJHNKKCAG);
	}

	::System::Boolean DGEBDKDFDCP(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PCHPBIFBLCE_DGEBDKDFDCP_OFFSET))(this, KDDJHNKKCAG);
	}

	::System::Boolean GOJJEIKEIMN(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_PCHPBIFBLCE_GOJJEIKEIMN_OFFSET))(this, KDDJHNKKCAG);
	}
};
