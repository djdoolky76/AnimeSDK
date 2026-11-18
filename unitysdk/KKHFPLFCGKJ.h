#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/System/ValueType.h"

#define KKHFPLFCGKJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x771C10)
#define KKHFPLFCGKJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x771C70)

inline static constexpr unsigned int KKHFPLFCGKJ_TypeDefinitionIndex = 65414;

struct alignas(4) KKHFPLFCGKJ
{
	::System::Boolean Equals(::MoleMole::Config::BuffGroupName HAAEBCOBKFF, ::MoleMole::Config::BuffGroupName BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BuffGroupName, ::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + KKHFPLFCGKJ_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::BuffGroupName EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BuffGroupName))((::PBYTE)hIl2Cpp + KKHFPLFCGKJ_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
