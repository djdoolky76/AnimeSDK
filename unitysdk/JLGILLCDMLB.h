#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

#define JLGILLCDMLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x75DFF0)
#define JLGILLCDMLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x75DFA0)

inline static constexpr unsigned int JLGILLCDMLB_TypeDefinitionIndex = 60741;

struct alignas(4) JLGILLCDMLB
{
	::System::Int32 GetHashCode(::MoleMole::Config::BaseProperty HFMHOELKCAJ)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + JLGILLCDMLB_GETHASHCODE_OFFSET))(this, HFMHOELKCAJ);
	}

	::System::Boolean Equals(::MoleMole::Config::BaseProperty HAAEBCOBKFF, ::MoleMole::Config::BaseProperty BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + JLGILLCDMLB_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
