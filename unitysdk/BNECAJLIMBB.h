#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/ValueType.h"

#define BNECAJLIMBB_EQUALS_OFFSET UNITYSDK_OFFSET(0x7D61B0)
#define BNECAJLIMBB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7D6210)

inline static constexpr unsigned int BNECAJLIMBB_TypeDefinitionIndex = 73944;

struct alignas(4) BNECAJLIMBB
{
	::System::Boolean Equals(::MoleMole::Config::BaseProperty HAAEBCOBKFF, ::MoleMole::Config::BaseProperty BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::BaseProperty, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + BNECAJLIMBB_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::BaseProperty EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::BaseProperty))((::PBYTE)hIl2Cpp + BNECAJLIMBB_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
