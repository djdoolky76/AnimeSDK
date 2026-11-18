#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/TeamProperty.h"
#include "unitysdk/System/ValueType.h"

#define PKEDGDHMLIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x8BD110)
#define PKEDGDHMLIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8BD170)

inline static constexpr unsigned int PKEDGDHMLIF_TypeDefinitionIndex = 60818;

struct alignas(4) PKEDGDHMLIF
{
	::System::Boolean Equals(::MoleMole::Config::TeamProperty HAAEBCOBKFF, ::MoleMole::Config::TeamProperty BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::TeamProperty, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + PKEDGDHMLIF_EQUALS_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::TeamProperty EIFONLCJOPG)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::TeamProperty))((::PBYTE)hIl2Cpp + PKEDGDHMLIF_GETHASHCODE_OFFSET))(this, EIFONLCJOPG);
	}
};
