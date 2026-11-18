#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ECGCMHEDEPC_ADECJBJONCK_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3E4710)

inline static constexpr unsigned int ECGCMHEDEPC_ADECJBJONCK_TypeDefinitionIndex = 55299;

struct alignas(4) ECGCMHEDEPC_ADECJBJONCK
{
	::System::Single KKJMIHILCOB; // 0x10
	::System::Int32 BKHFPNIBNCB; // 0x14

	/*
	::System::Int32 CompareTo(::ECGCMHEDEPC_ADECJBJONCK LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::ECGCMHEDEPC_ADECJBJONCK))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_ADECJBJONCK_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
	*/
};
