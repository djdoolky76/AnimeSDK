#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IPOHJBLJGDJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x937EB0)
#define IPOHJBLJGDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x911C90)

inline static constexpr unsigned int IPOHJBLJGDJ_TypeDefinitionIndex = 18765;

struct alignas(4) IPOHJBLJGDJ
{
	::System::Int32 KBNHAJHPKPO; // 0x10
	::System::Int32 HHHPDKABJNP; // 0x14
	::System::Boolean IGAAKDOIPNN; // 0x18

	::System::Void _ctor(::System::Int32 HHHPDKABJNP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IPOHJBLJGDJ__CTOR_OFFSET))(this, HHHPDKABJNP);
	}

	/*
	::System::Boolean Equals(::IPOHJBLJGDJ LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::IPOHJBLJGDJ))((::PBYTE)hIl2Cpp + IPOHJBLJGDJ_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
