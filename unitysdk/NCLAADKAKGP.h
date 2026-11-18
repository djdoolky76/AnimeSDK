#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NCLAADKAKGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x6E9710)
#define NCLAADKAKGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E9770)
#define NCLAADKAKGP_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x6E97C0)
#define NCLAADKAKGP__CTOR_OFFSET UNITYSDK_OFFSET(0x2E4140)

inline static constexpr unsigned int NCLAADKAKGP_TypeDefinitionIndex = 84332;

struct alignas(4) NCLAADKAKGP
{
	::System::UInt32 NNDDCOIOMGJ; // 0x10
	::System::UInt32 MALFDBMCCIO; // 0x14

	::System::Void _ctor(::System::UInt32 LIPMHLCPJKF, ::System::UInt32 HBFCDLLPFGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NCLAADKAKGP__CTOR_OFFSET))(this, LIPMHLCPJKF, HBFCDLLPFGK);
	}

	/*
	::System::Boolean Equals(::NCLAADKAKGP LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::NCLAADKAKGP))((::PBYTE)hIl2Cpp + NCLAADKAKGP_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLAADKAKGP_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLAADKAKGP_HLPHPBAODIF_OFFSET))(this);
	}
};
