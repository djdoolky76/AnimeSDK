#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PANLBJHDGAA;

#define BPNGLLLIMDC_BHPAFEBNHLG_POBKAICMIFN_OFFSET UNITYSDK_OFFSET(0x1685C440)
#define BPNGLLLIMDC_BHPAFEBNHLG__CTOR_OFFSET UNITYSDK_OFFSET(0x1685C430)

inline static constexpr unsigned int BPNGLLLIMDC_BHPAFEBNHLG_TypeDefinitionIndex = 56037;

class BPNGLLLIMDC_BHPAFEBNHLG : public ::System::Object
{
public:
	::System::Int32 AOCOIDIMLIH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_BHPAFEBNHLG__CTOR_OFFSET))(this);
	}

	::System::Boolean POBKAICMIFN(::PANLBJHDGAA* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::PANLBJHDGAA*))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_BHPAFEBNHLG_POBKAICMIFN_OFFSET))(this, HAAEBCOBKFF);
	}
};
